#pragma once

/*
 * This looks more complex than it should be. But we need to
 * get the type for the ~ right in round_down (it needs to be
 * as wide as the result!), and we want to evaluate the macro
 * arguments just once each.
 */
#define __round_mask(x, y) ((__typeof__(x))((y) - 1))

/**
 * round_up - round up to next specified power of 2
 * @x: the value to round
 * @y: multiple to round up to (must be a power of 2)
 *
 * Rounds @x up to next multiple of @y (which must be a power of 2).
 * To perform arbitrary rounding up, use roundup() below.
 */
#define round_up(x, y) ((((x) - 1) | __round_mask(x, y)) + 1)

/**
 * round_down - round down to next specified power of 2
 * @x: the value to round
 * @y: multiple to round down to (must be a power of 2)
 *
 * Rounds @x down to next multiple of @y (which must be a power of 2).
 * To perform arbitrary rounding down, use rounddown() below.
 */
#define round_down(x, y) ((x) & ~__round_mask(x, y))

/**
 * roundup - round up to the next specified multiple
 * @x: the value to up
 * @y: multiple to round up to
 *
 * Rounds @x up to next multiple of @y. If @y will always be a power
 * of 2, consider using the faster round_up().
 */
#define roundup(x, y)                                                                              \
    ({                                                                                             \
        typeof(y) __y = y;                                                                         \
        (((x) + (__y - 1)) / __y) * __y;                                                           \
    })
/**
 * rounddown - round down to next specified multiple
 * @x: the value to round
 * @y: multiple to round down to
 *
 * Rounds @x down to next multiple of @y. If @y will always be a power
 * of 2, consider using the faster round_down().
 */
#define rounddown(x, y)                                                                            \
    ({                                                                                             \
        typeof(x) __x = (x);                                                                       \
        __x - (__x % (y));                                                                         \
    })

/**
 * abs - return absolute value of an argument
 * @x: the value.  If it is unsigned type, it is converted to signed type first.
 *     char is treated as if it was signed (regardless of whether it really is)
 *     but the macro's return type is preserved as char.
 *
 * Return: an absolute value of x.
 */
#define abs(x)                                                                                     \
    __abs_choose_expr(x, long long,                                                                \
        __abs_choose_expr(x, long,                                                                 \
            __abs_choose_expr(x, int,                                                              \
                __abs_choose_expr(x, short,                                                        \
                    __abs_choose_expr(x, char,                                                     \
                        __builtin_choose_expr(__builtin_types_compatible_p(typeof(x), char),       \
                            (char)({                                                               \
                                signed char __x = (x);                                             \
                                __x < 0 ? -__x : __x;                                              \
                            }),                                                                    \
                            ((void)0)))))))

#define __abs_choose_expr(x, type, other)                                                          \
    __builtin_choose_expr(__builtin_types_compatible_p(typeof(x), signed type)                     \
                              || __builtin_types_compatible_p(typeof(x), unsigned type),           \
        ({                                                                                         \
            signed type __x = (x);                                                                 \
            __x < 0 ? -__x : __x;                                                                  \
        }),                                                                                        \
        other)

/**
 * abs_diff - return absolute value of the difference between the arguments
 * @a: the first argument
 * @b: the second argument
 *
 * @a and @b have to be of the same type. With this restriction we compare
 * signed to signed and unsigned to unsigned. The result is the subtraction
 * the smaller of the two from the bigger, hence result is always a positive
 * value.
 *
 * Return: an absolute value of the difference between the @a and @b.
 */
#define abs_diff(a, b)                                                                             \
    ({                                                                                             \
        typeof(a) __a = (a);                                                                       \
        typeof(b) __b = (b);                                                                       \
        (void)(&__a == &__b);                                                                      \
        __a > __b ? (__a - __b) : (__b - __a);                                                     \
    })
