extern char *D_001E332C;
extern void func_0A5518(void);

int func_026170(int force)
{
    char *record = D_001E332C;
    if (record == 0) {
        return 0;
    }
    if ((*(unsigned int *)(record + 4) & 2) == 0 || force != 0) {
        *(unsigned int *)(record + 4) |= 2;
        func_0A5518();
        return 1;
    }
    return 0;
}
