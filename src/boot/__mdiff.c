/* __mdiff -- David M. Gay mprec diff, SDK form (sdk/library/mdiff.c).
 * Provenance: newlib libc/stdlib/mprec.c `diff`; measured compiler SN ProDG
 * 3.01 ee-gcc2953 (GCC 2.95.3) + span5 assembler (-G0), -O2 -G0. */
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;
typedef struct _Bigint {
    struct _Bigint *_next;
    s32 _k, _maxwds, _sign, _wds;
    u32 _x[1];
} _Bigint;
struct _reent;
typedef s32 __Long;
typedef u32 __ULong;
#define Storeinc(a,b,c) (((u16 *)a)[1] = (u16)b, ((u16 *)a)[0] = (u16)c, a++)
#define Sign_Extend(a,b)
extern _Bigint *_Balloc(struct _reent *, s32);
extern s32 Dcmp(_Bigint *, _Bigint *);

_Bigint *
__mdiff(struct _reent *ptr, _Bigint *a, _Bigint *b)
{
    _Bigint *c;
    s32 i, wa, wb;
    __Long borrow, y;
    __ULong *xa, *xae, *xb, *xbe, *xc;
    __Long z;

    i = Dcmp(a, b);
    if (!i) {
        c = _Balloc(ptr, 0);
        c->_wds = 1;
        c->_x[0] = 0;
        return c;
    }
    if (i < 0) {
        c = a;
        a = b;
        b = c;
        i = 1;
    } else {
        i = 0;
    }
    c = _Balloc(ptr, a->_k);
    c->_sign = i;
    wa = a->_wds;
    xa = a->_x;
    xae = xa + wa;
    wb = b->_wds;
    xb = b->_x;
    xbe = xb + wb;
    xc = c->_x;
    borrow = 0;
    do {
        y = (*xa & 0xffff) - (*xb & 0xffff) + borrow;
        borrow = y >> 16;
        Sign_Extend(borrow, y);
        z = (*xa++ >> 16) - (*xb++ >> 16) + borrow;
        borrow = z >> 16;
        Sign_Extend(borrow, z);
        Storeinc(xc, z, y);
    } while (xb < xbe);
    while (xa < xae) {
        y = (*xa & 0xffff) + borrow;
        borrow = y >> 16;
        Sign_Extend(borrow, y);
        z = (*xa++ >> 16) + borrow;
        borrow = z >> 16;
        Sign_Extend(borrow, z);
        Storeinc(xc, z, y);
    }
    while (!*--xc)
        wa--;
    c->_wds = wa;
    return c;
}
