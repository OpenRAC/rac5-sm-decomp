/* LEVEL_09:0x025728 -- placement copy of FRONTEND_001410.c: one-time init gate; sets a flag once a status bit is seen. */
extern int D_001DDD74;
extern unsigned char D_001DDD59;
extern int D_001DDD5C;
extern unsigned char D_001DDCF0;
extern int func_084940(int a);

int func_025728(void)
{
    int r;

    if (D_001DDD74 != 0) {
        return 0;
    }
    r = func_084940(1);
    if (r & 8) {
        if (D_001DDD59 == 0) {
            D_001DDD59 = 1;
            D_001DDD5C = 0xFF;
        }
    }
    if (D_001DDD59 == 0) {
        return 0;
    }
    if (D_001DDD5C != 0) {
        return 0;
    }
    D_001DDCF0 = 1;
    return 1;
}
