/* USA LEVEL_01.REL:0x000378, 336-byte candidate (21 November 2026).
 * Measured pinned: 13 differing words; first difference at 0x88.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Entry {
    int pad_00;
    int a;
    int b;
    int c;
    int pad_10;
} Entry;

extern Entry D_0020B500[];
extern char D_0020B4E8[];
extern char D_00235140[];

extern void func_000300(int idx);
extern unsigned int func_0002D8(int index);
extern int func_000580(int a0, int a1, int a2, int a3);
extern int func_000358(int index);
extern int func_000650(char *a0);
extern int func_038A38(char *a);
extern void func_0B3C68(int a);
extern void func_0B3C38(int a, int b, unsigned int c);
extern void func_0008F8(unsigned int id, int flag);

int func_000378(int idx, int x, int flag)
{
    Entry *e;
    int ok;
    int h;
    int t;

    func_000300(idx);
    e = &D_0020B500[idx];
    if (func_0002D8(e->a) == 0) {
        ok = func_000580(e->c, e->a, x, flag);
        if (e->b < 6) {
            t = func_000580(e->c, e->b, x, flag) != 0;
            ok = ok ? t : 0;
        }
        return ok;
    }
    h = func_000358(idx);
    if (func_000650((char *)h)) {
        if (flag) {
            if (!(func_038A38(D_00235140) & 0xFF)) {
                func_0B3C68(-0x9E);
                func_0B3C38(0, -0x9E, -1);
            }
        }
        func_0008F8(h, 0);
        return 0;
    }
    if (flag) {
        if (!(func_038A38(D_00235140) & 0xFF)) {
            func_0B3C38((int)D_0020B4E8, -0x37, -1);
        }
    }
    return 0;
}
