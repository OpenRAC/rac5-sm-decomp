/* FRONTEND.REL:0x0065E8 -- the same body as FRONTEND_002D30.c, with the address this placement uses (D_00000000). */
/* FRONTEND:0x002D30 -- stores the argument in the global word at 0x27E90. */
extern char D_00000000[];

void func_002D30(int value)
{
    *(int *)D_00000000 = value;
}
