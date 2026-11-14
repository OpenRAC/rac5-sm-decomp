/* _ratio -- David M. Gay's mprec ratio (newlib libc/stdlib/mprec.c), written with bare types; retail 0x01ED0690. */
typedef int s32;
typedef unsigned int u32;
typedef struct _Bigint {
    struct _Bigint *_next;
    s32 _k, _maxwds, _sign, _wds;
    u32 _x[1];
} _Bigint;
typedef union {
    double d;
    u32 i[2];
} double_union;
#define word0(x) (x.i[1])
#define word1(x) (x.i[0])
#define Exp_msk1 ((u32)0x100000L)
#define Exp_mask ((u32)0x7ff00000L)
#define Exp_shift 20
#define P 53

extern double _b2d(_Bigint *a, s32 *e);

double _ratio(_Bigint *a, _Bigint *b)
{
    double_union da, db;
    s32 k, ka, kb;

    da.d = _b2d(a, &ka);
    db.d = _b2d(b, &kb);
    k = ka - kb + 32 * (a->_wds - b->_wds);
    if (k > 0) {
        word0(da) += k * Exp_msk1;
    } else {
        k = -k;
        word0(db) += k * Exp_msk1;
    }
    return da.d / db.d;
}
