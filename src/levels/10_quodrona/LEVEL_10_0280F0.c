/* LEVEL_10:0x0280F0 -- copies the level's default record (the global at
   0x23A340, fifty-two bytes) into the record slot of one element of the
   table the global 0x1FCFAC points to; the record sits at 0xE8 inside the
   element. */
typedef struct {
    float f[12];
    int i;
} Rec;

typedef struct {
    char pad[0xE8];
    Rec rec;
} Slot;

extern Rec *D_001FCFAC;
extern Rec D_0023A340;

void func_0280F0(int index)
{
    Rec *rec = (Rec *)(index * 52 + (long)D_001FCFAC);
    Slot *slot = (Slot *)rec;

    slot->rec = D_0023A340;
}
