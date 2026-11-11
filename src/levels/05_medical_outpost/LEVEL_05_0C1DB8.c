extern char *func_0A49A0(int mode);
extern void func_12F750(int, void *, void *);
extern void func_12F9E8(int, int);
extern char D_00201C58[];
extern char *D_001E332C;

void func_0C1DB8(void)
{
    char *value = func_0A49A0(0);
    func_12F750(0, D_00201C58, value);
    func_12F9E8(0, *(int *)(D_001E332C + 0x3c) + 1);
}
