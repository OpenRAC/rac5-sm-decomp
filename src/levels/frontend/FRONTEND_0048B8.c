/* FRONTEND:0x0048B8 -- loads four GS matrices in order, updating after each load. */
extern char D_0010BEC0[];
extern char D_0010BE80[];
extern char D_00109700[];
extern void func_006120(int mode);
extern void func_0061C0(const void *m);
extern void func_006320(void);

void func_0048B8(void)
{
    char *p;

    func_006120(0);
    func_0061C0(D_0010BEC0);
    func_006320();
    func_006120(1);
    func_0061C0(D_0010BE80);
    func_006320();
    p = D_00109700;
    func_006120(2);
    func_0061C0(p);
    func_006320();
    func_006120(3);
    func_0061C0(p);
    func_006320();
}
