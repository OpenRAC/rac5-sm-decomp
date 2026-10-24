/* LEVEL_22.REL:0x08F1F0 -- stamps the shared record: the two floats in
   address order and the arm byte. */
typedef struct {
    char pad_00[0x08];
    float a;
    float b;
} Pair;

extern Pair D_155A90;
extern unsigned char D_155AA0;

void func_08F1F0(float a0, float a1)
{
    D_155AA0 = 1;
    D_155A90.a = a0;
    D_155A90.b = a1;
}
