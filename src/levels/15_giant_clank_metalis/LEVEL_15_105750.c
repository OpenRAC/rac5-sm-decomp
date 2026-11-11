/* LEVEL_15:0x105750 -- sets up the level's eight-entry table from its
   static descriptors. */
extern char D_002EE440[];
extern char D_002ED2E8[];
extern char D_002ED97C[];
extern char D_002EE420[];
extern char D_0016FC58[];
extern void func_0FE440(void *a, void *b, int count, void *c, void *d,
                        void *e, void *f);

void func_105750(void)
{
    func_0FE440(D_002EE440, D_002ED2E8, 8, D_002ED97C, D_002ED97C + 0xBC,
                D_002EE420, D_0016FC58);
}
