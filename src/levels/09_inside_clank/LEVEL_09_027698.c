/* LEVEL_09:0x027698 -- copies the record of one element of the table the
   global 0x1DDDAC points to (the record sits at 0xE8 inside the element)
   into the level's global record at 0x2186C0. */
typedef struct {
    float f[12];
    int i;
} Rec;

typedef struct {
    char pad[0xE8];
    Rec rec;
} Slot;

extern Rec *D_001DDDAC;
extern Rec D_002186C0;

void func_027698(int index)
{
    Rec *rec = (Rec *)(index * 52 + (long)D_001DDDAC);
    Slot *slot = (Slot *)rec;

    D_002186C0 = slot->rec;
}
