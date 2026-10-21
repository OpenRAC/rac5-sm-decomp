/* FRONTEND:0x026CF8 -- lazily creates the table at 0x1EF388 and returns it. */
extern char D_001EF388[];
extern char D_0010A1F8[];
extern char D_001EF3A8[];
extern void func_026ED8(void);
extern void func_0268E0(char *, char *, char *);

char *func_026CF8(void)
{
    if (*(int *)D_001EF388 != 0)
        return D_001EF388;
    func_026ED8();
    func_0268E0(D_001EF388, D_0010A1F8, D_001EF3A8);
    return D_001EF388;
}
