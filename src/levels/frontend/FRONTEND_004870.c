/* FRONTEND:0x004870 -- initialises the two display lists. */
extern char D_0010BEC0[];
extern char D_0010BE80[];

void func_006120(int);
void func_0061C0(void *);
void func_006320(void);

void func_004870(void)
{
    func_006120(0);
    func_0061C0(D_0010BEC0);
    func_006120(1);
    func_0061C0(D_0010BE80);
    func_006320();
}
