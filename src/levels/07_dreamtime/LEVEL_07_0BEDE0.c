/* LEVEL_07:0x0BEDE0 -- placement copy of LEVEL_01_0BCD80.c: caches the active object's records, builds two result records and primes the pose object. */

extern char *D_0024AFF0;
extern char *D_0033E470;
extern char *D_0033E474;
extern char D_0033E4E0[];
extern char D_0033E508[];
extern char D_0033E480[];

extern int func_08BBF8(char *a, unsigned int flags, int value, char *result);
extern int func_08BC80(char *a, char *b);
extern void func_08B000(char *p);
extern void func_08ABF0(char *a, char *b, float t);

int func_0BEDE0(void)
{
    D_0033E470 = D_0024AFF0;
    D_0033E474 = *(char **)(*(char **)(D_0033E470 + 0x40) + 4);
    func_08BBF8(*(char **)(D_0033E474 + 8), 0xFFFFFFFF, *(int *)(D_0033E474 + 4) + 0x20, D_0033E4E0);
    func_08BC80(**(char ***)(D_0033E474 + 8) + 0x13C0, D_0033E4E0);
    func_08BBF8(*(char **)(D_0033E474 + 8), 0xFFFFFFFF, *(int *)(D_0033E474 + 4) + 0x20, D_0033E508);
    func_08BC80(**(char ***)(D_0033E474 + 8) + 0x13C0, D_0033E508);
    func_08B000(D_0033E480);
    func_08ABF0(D_0033E480, D_0033E4E0, 0.0f);
    return 1;
}
