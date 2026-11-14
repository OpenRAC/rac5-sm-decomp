/* LEVEL_20:0x0EB048 -- placement copy of LEVEL_16_118CA0.c: while the recorder is on, counts a frame; when a target is set writes a snapshot (a word from the linked object, two bytes of the target and the pending byte) at the cursor; then clears the pending byte and advances the cursor with func_0EB0F8. */
typedef struct {
    char pad00[0x45];
    unsigned char b45;
    unsigned char b46;
} Target;

typedef struct {
    char pad00[0xF4];
    int wF4;
} Linked;

extern unsigned char D_0011AB98;
extern unsigned char D_0011ABA8;
extern unsigned int D_00203630;
extern Target *D_00203634;
extern char *D_0011ABA4;
extern Linked *D_0011ABAC;
extern char *func_0EB0F8(char *p);

void func_0EB048(void)
{
    if (D_0011AB98 != 0) {
        D_00203630++;
        if (D_00203634 != 0) {
            *(int *)D_0011ABA4 = D_0011ABAC ? D_0011ABAC->wF4 : 0;
            D_0011ABA4[4] = D_00203634->b45;
            D_0011ABA4[5] = D_00203634->b46;
            D_0011ABA4[6] = D_0011ABA8;
        }
        D_0011ABA8 = 0;
        D_0011ABA4 = func_0EB0F8(D_0011ABA4);
    }
}
