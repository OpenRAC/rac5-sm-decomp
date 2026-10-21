/* FRONTEND:0x0033F0 -- publishes the aspect ratio then syncs. */
extern int D_00027E9C[];
extern int g_AspectRatioID;

void func_003590(void);

void func_0033F0(void)
{
    int *p = *(int **)D_00027E9C;

    g_AspectRatioID = p[8];
    func_003590();
}
