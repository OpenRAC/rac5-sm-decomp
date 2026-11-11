/* FRONTEND:0x005618 -- selects one of two offsets from a shared global pointer. */
extern int func_005748(int mask);
extern char *D_0002AD1C; char *func_005618(int mask){ return D_0002AD1C + (func_005748(mask) ? 0x1D0 : 0x1E0); }
