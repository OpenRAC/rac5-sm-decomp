/* LEVEL_02.REL:0x0AA660 -- builds indexed and primary texture transfers. */
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long u64;

typedef struct {
    char pad_00[4];
    u16 format;
    u16 mode;
    u16 width;
    u16 height;
    u16 depth;
} ImageInfo;

typedef struct {
    char pad_00[0x34];
    void *pixels;
    void *palette;
} Image;

extern ImageInfo *func_0A70C8(Image *);
extern void *func_0A70F8(Image *, int, int);
extern void *func_0A7168(Image *, int, int);
extern u32 get_psm_from_pixel_mode__Fi(int);
extern void dlib_displist_direct_begin__FP13DLIB_DISPLIST(void *);
extern void dlib_displist_direct_end__FP13DLIB_DISPLIST(void *);
extern void dlib_displist_add_data_ul64__FP13DLIB_DISPLISTUlUl(
    void *, u64, u64);
extern void dlib_displist_add_ref__FP13DLIB_DISPLISTP6QWdatai(
    void *, void *, int);

void image_upload__FP13DLIB_DISPLISTP10PS2Textureii(void *list, Image *image, u32 source_base, u32 palette_base)
{
    ImageInfo *info = func_0A70C8(image);
    void *pixels = func_0A70F8(image, 0, 0);
    u32 format = info->format;
    u32 width;
    u32 height;
    u32 psm;
    int transfer_bytes;
    int transfer_qwc;
    u32 blocks;

    if ((u32)(format - 4) < 2) {
        u32 palette_qwc = 0x40;
        void *palette;
        if (format == 4)
            palette_qwc = 4;
        palette = func_0A7168(image, 0, 0);

        dlib_displist_direct_begin__FP13DLIB_DISPLIST(list);
        dlib_displist_add_data_ul64__FP13DLIB_DISPLISTUlUl(
            list, ((u64)palette_base << 32) | 0x1000000000000ul, 0x50);
        dlib_displist_add_data_ul64__FP13DLIB_DISPLISTUlUl(list, 0, 0x51);
        if (info->format == 4) {
            dlib_displist_add_data_ul64__FP13DLIB_DISPLISTUlUl(
                list, 0x200000008ul, 0x52);
        } else {
            dlib_displist_add_data_ul64__FP13DLIB_DISPLISTUlUl(
                list, 0x1000000010ul, 0x52);
        }
        dlib_displist_add_data_ul64__FP13DLIB_DISPLISTUlUl(list, 0, 0x53);
        dlib_displist_direct_end__FP13DLIB_DISPLIST(list);
        dlib_displist_add_ref__FP13DLIB_DISPLISTP6QWdatai(
            list, image->palette, 2);
        dlib_displist_add_ref__FP13DLIB_DISPLISTP6QWdatai(
            list, palette, palette_qwc);
    }

    width = info->width;
    height = info->height;
    transfer_bytes = (int)width * (int)height * (int)info->depth;
    transfer_qwc = transfer_bytes / 128;
    psm = get_psm_from_pixel_mode__Fi(info->depth);
    if (info->mode == 1) {
        if (info->format == 5) {
            psm = 0;
            width >>= 1;
            height >>= 1;
        } else if (info->format == 4) {
            psm = 2;
            width = info->height >> 1;
            height = info->width >> 1;
        }
    }
    blocks = (width + 0x3F) >> 6;
    if (width < 0x40)
        blocks = 1;

    dlib_displist_direct_begin__FP13DLIB_DISPLIST(list);
    dlib_displist_add_data_ul64__FP13DLIB_DISPLISTUlUl(
        list, ((u64)source_base << 32) | ((u64)blocks << 48) |
              ((u64)psm << 56), 0x50);
    dlib_displist_add_data_ul64__FP13DLIB_DISPLISTUlUl(list, 0, 0x51);
    dlib_displist_add_data_ul64__FP13DLIB_DISPLISTUlUl(
        list, (u64)width | ((u64)height << 32), 0x52);
    dlib_displist_add_data_ul64__FP13DLIB_DISPLISTUlUl(list, 0, 0x53);
    dlib_displist_direct_end__FP13DLIB_DISPLIST(list);
    dlib_displist_add_ref__FP13DLIB_DISPLISTP6QWdatai(list, image->pixels, 2);
    dlib_displist_add_ref__FP13DLIB_DISPLISTP6QWdatai(list, pixels, transfer_qwc);
}
