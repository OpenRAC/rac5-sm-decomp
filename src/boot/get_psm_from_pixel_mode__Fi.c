/* get_psm_from_pixel_mode__Fi -- maps a pixel mode id to the GS pixel storage format, -1 when unsupported. */
int get_psm_from_pixel_mode__Fi(int mode) {
    switch (mode) {
    case 32:
        return 0;
    case 24:
        return 1;
    case 16:
        return 2;
    case 8:
        return 0x13;
    case 4:
        return 0x14;
    default:
        return -1;
    }
}
