#pragma once

// Flags passed for splicing
#define SPLICE_F_MOVE     (0x01) /* move pages instead of copying */
#define SPLICE_F_NONBLOCK (0x02) /* don't block on the pipe splicing */
#define SPLICE_F_MORE     (0x04) /* expect more data */
#define SPLICE_F_GIFT     (0x08) /* pages passed in are a gift */

#define SPLICE_F_ALL (SPLICE_F_MOVE | SPLICE_F_NONBLOCK | SPLICE_F_MORE | SPLICE_F_GIFT)
