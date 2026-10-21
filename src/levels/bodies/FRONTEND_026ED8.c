/* FRONTEND:0x026ED8 -- creates the global object on demand. */
extern int D_001EF3A8[];
extern char D_0010A230[];

extern void func_026900(int *, char *);

int func_026ED8(void)
{
    if (D_001EF3A8[0] == 0)
        func_026900(D_001EF3A8, D_0010A230);
    return (int)D_001EF3A8;
}
