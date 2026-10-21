/* FRONTEND:0x0149B8 -- clears the two shared flags. */
extern char D_00030260[];
extern char D_00030264[];

void func_0149B8(void)
{
    D_00030260[0] = 0;
    *(int *)D_00030264 = 0;
}
