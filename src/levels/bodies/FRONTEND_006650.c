/* FRONTEND:0x006650 -- initializes a display list and calls one helper with a matrix stack. */
extern char gMatrixStack[];
extern char db_dlist[];
void func_01C6B0(void);
void func_005FC0(void *a, int b, int c, int d, int e, int f, int g);
void func_00A5E0(void);
void func_007B38(void);
extern void dlib_displist_db_init(void *p, int n) __asm__("dlib_displist_db_init__FP16DLIB_DISPLIST_DBi");

void func_006650(void)
{
    func_01C6B0();
    func_005FC0(gMatrixStack, 8, 8, 0x20, 8, 8, 8);
    dlib_displist_db_init(db_dlist, 0);
    func_00A5E0();
    func_007B38();
}
