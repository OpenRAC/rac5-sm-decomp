/* LEVEL_18:0x0163A8 -- copy the record the pointer points to, the record
   being found in the table of the level from the position of the pointer. */
typedef struct {
    float f[16];
} Rec;

typedef struct {
    char pad[0x44];
    char *base;
} Holder;

extern Holder *D_1B5D20;
extern char **D_19C2D4;

void func_0163A8(Rec *dst)
{
    int index = ((char *)dst - D_1B5D20->base) >> 7;
    Rec *src = (Rec *)(D_19C2D4[0] + index * 80);

    *dst = *src;
}
