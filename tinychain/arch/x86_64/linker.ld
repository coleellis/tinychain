ENTRY(_start)

SECTIONS {
    . = 0x400000;

    .note.gnu.build-id : {
        *(.note.gnu.build-id)
    } :text_seg

    .text : {
        *(.text*)
    } :text_seg

    .rodata : {
        *(.rodata*)
    } :rodata_seg

    .data : {
        *(.data*)
    } :data_seg

    .bss : {
        *(.bss*) *(COMMON)
    } :data_seg
}

PHDRS {
    text_seg PT_LOAD FLAGS(5); /* R-X */
    rodata_seg PT_LOAD FLAGS(4); /* R-- */
    data_seg PT_LOAD FLAGS(6); /* RW- */
}
