/* boot:0x01EADFC8 -- forward a masked blit with this pixel format's descriptor. */
extern int yuv_mask_blit_01EABD20(int, int, int, int, int, int, int, int, int, int, int, int, char *);
extern char rac5_yuv_desc_16a1bpp[];

int YUV_blit_16a1bpp_mask(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l)
{
    return yuv_mask_blit_01EABD20(a, b, c, d, e, f, g, h, i, j, k, l, rac5_yuv_desc_16a1bpp);
}
