/* LEVEL_16.REL:0x08FE40 -- parks the two float arguments at +0x8 and +0xC of
   the record at 0x001A46E0 and raises the separate byte at 0x001A46F0.  The
   byte is its own symbol (the retail reaches it with a bare `lui`), and the
   statements are written flag first so the compiler lands on the retail's
   store order. */
typedef struct {
    unsigned char pad0[8];
    float a_8;
    float b_C;
} Rec;

extern Rec D_001A46E0;
extern unsigned char D_001A46F0;

void func_08FE40(float x, float y)
{
    D_001A46F0 = 1;
    D_001A46E0.a_8 = x;
    D_001A46E0.b_C = y;
}
