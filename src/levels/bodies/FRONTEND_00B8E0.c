/* FRONTEND.REL:0x00B8E0 -- the same body as FRONTEND_002D30.c, with the address this placement uses (D_0002FDE0). */
/* FRONTEND:0x002D30 -- stores the argument in the global word at 0x27E90. */
extern char D_0002FDE0[];

void func_002D30(int value)
{
    *(int *)D_0002FDE0 = value;
}
