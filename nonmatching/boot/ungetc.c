/* ungetc -- Sony-modified newlib libc/stdio/ungetc.c (UC Berkeley), adapted to
 * the retail FILE/_reent layout. The SDK version replaces __submore() with a
 * fixed-buffer overflow message (68 bytes at 0x01F27368) + EOF.
 * Provenance: newlib-2000-02-17 ungetc.c; measured compiler SN ProDG 3.01
 * ee-gcc2953 (GCC 2.95.3) + Ps2EeAs 2.0, -O2 -G0. */
typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long s64;
typedef unsigned long u64;

#define EOF (-1)

#define __SRD 0x0004
#define __SWR 0x0008
#define __SRW 0x0010
#define __SEOF 0x0020

typedef struct _reent {
    s32 _pad0[14];
    s32 __sdidinit;
} _reent;

typedef struct _FILE {
    unsigned char *_p;        /* 0x00 */
    s32 _r;                   /* 0x04 */
    s32 _w;                   /* 0x08 */
    s16 _flags;               /* 0x0C */
    s16 _file;                /* 0x0E */
    unsigned char *_bf_base;  /* 0x10 */
    s32 _pad14;               /* 0x14 */
    s32 _lbfsize;             /* 0x18 */
    s32 _pad1c[5];            /* 0x1C */
    unsigned char *_ub_base;  /* 0x30 */
    s32 _ub_size;             /* 0x34 */
    unsigned char *_up;       /* 0x38 */
    s32 _ur;                  /* 0x3C */
    unsigned char _ubuf[3];   /* 0x40 */
    u8 _pad43[1];             /* 0x43 */
    s32 _pad44[4];            /* 0x44 */
    _reent *_data;            /* 0x54 */
} FILE;

extern _reent *_impure_ptr;
extern char _ungetc_msg[];
extern s32 __sinit(_reent *);
extern s32 fflush(FILE *);
extern s32 write(s32, const void *, u32);

s32 ungetc(s32 c, register FILE *fp)
{
    if (c == EOF)
        return EOF;
    if (fp->_data == 0)
        fp->_data = _impure_ptr;
    if (!fp->_data->__sdidinit)
        __sinit(fp->_data);
    fp->_flags &= ~__SEOF;
    if ((fp->_flags & __SRD) == 0) {
        if ((fp->_flags & __SRW) == 0)
            return EOF;
        if (fp->_flags & __SWR) {
            if (fflush(fp))
                return EOF;
            fp->_flags &= ~__SWR;
            fp->_w = 0;
            fp->_lbfsize = 0;
        }
        fp->_flags |= __SRD;
    }
    c = (unsigned char)c;
    if (fp->_ub_base != 0) {
        if (fp->_r >= fp->_ub_size) {
            write(1, _ungetc_msg, 68);
            return EOF;
        }
        *--fp->_p = c;
        fp->_r++;
        return c;
    }
    if (fp->_bf_base != 0 && fp->_p > fp->_bf_base && fp->_p[-1] == c) {
        fp->_p--;
        fp->_r++;
        return c;
    }
    fp->_ur = fp->_r;
    fp->_up = fp->_p;
    fp->_ub_base = fp->_ubuf;
    fp->_ub_size = sizeof(fp->_ubuf);
    fp->_ubuf[sizeof(fp->_ubuf) - 1] = c;
    fp->_p = &fp->_ubuf[sizeof(fp->_ubuf) - 1];
    fp->_r = 1;
    return c;
}
