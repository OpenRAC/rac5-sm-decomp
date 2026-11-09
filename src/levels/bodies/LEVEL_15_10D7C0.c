/* LEVEL_15:0x10D7C0 -- initialises the shared records with mode 3. */
typedef struct {
    char pad[0xBC];
    char sub[4];
} Big;

extern char D_002F0360[];
extern char D_002EFB80[];
extern Big D_002EFE1C;
extern char D_002F0340[];
extern char D_001700A8[];
extern void func_0FE440(void *, void *, int, void *, void *, void *, void *);

void func_10D7C0(void)
{
    func_0FE440(D_002F0360, D_002EFB80, 3, &D_002EFE1C, D_002EFE1C.sub,
                D_002F0340, D_001700A8);
}
