/* LEVEL_17:0x118618 -- placement copy of LEVEL_16_118CA0.c: while the recorder is on, counts a frame; when a target is set writes a snapshot (a word from the linked object, two bytes of the target and the pending byte) at the cursor; then clears the pending byte and advances the cursor with func_1186C8. */
typedef struct {
    char pad00[0x45];
    unsigned char b45;
    unsigned char b46;
} Target;

typedef struct {
    char pad00[0xF4];
    int wF4;
} Linked;

extern unsigned char D_001ABAF0;
extern unsigned char D_001ABB00;
extern unsigned int D_002D13D8;
extern Target *D_002D13DC;
extern char *D_001ABAFC;
extern Linked *D_001ABB04;
extern char *func_1186C8(char *p);

void func_118618(void)
{
    if (D_001ABAF0 != 0) {
        D_002D13D8++;
        if (D_002D13DC != 0) {
            *(int *)D_001ABAFC = D_001ABB04 ? D_001ABB04->wF4 : 0;
            D_001ABAFC[4] = D_002D13DC->b45;
            D_001ABAFC[5] = D_002D13DC->b46;
            D_001ABAFC[6] = D_001ABB00;
        }
        D_001ABB00 = 0;
        D_001ABAFC = func_1186C8(D_001ABAFC);
    }
}
