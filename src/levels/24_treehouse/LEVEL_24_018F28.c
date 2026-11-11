/* LEVEL_24:0x018F28 -- placement copy of LEVEL_01_01A938.c: applies a pending state change after polling until the request can proceed. */
typedef struct {
    int cur;
    int pending;
} State;
extern State D_001FBAE8;
extern void func_019128(void);
extern int func_018E58(int a);
extern int func_018E70(int a);
extern void *func_018DF0(int *p);
extern int func_0B5190(void);
extern int func_0B4E48(void);
extern void func_0B4E58(int a);
extern void func_019010(void);

void func_018F28(void)
{
    int t;

    if (D_001FBAE8.pending == 0)
        return;
    if (D_001FBAE8.pending == D_001FBAE8.cur) {
        D_001FBAE8.pending = 0;
        return;
    }
    func_019128();
    while (func_018E58(6) && func_0B5190() == 0)
        ;
    if (func_018E58(6) && func_018E70(4)) {
        D_001FBAE8.pending = func_0B4E48();
        func_0B4E58(0);
    } else if (func_018E70(6)) {
        func_018DF0(&t);
        func_0B4E58(t);
    }
    D_001FBAE8.cur = D_001FBAE8.pending;
    D_001FBAE8.pending = 0;
    func_019010();
}
