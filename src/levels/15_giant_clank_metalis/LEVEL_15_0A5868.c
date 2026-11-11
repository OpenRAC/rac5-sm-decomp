/* LEVEL_15:0x0A5868 -- copies the four floats of a record into the level's
   stored record. */
typedef struct {
    float x;
    float y;
} V2;

typedef struct {
    V2 a;
    V2 b;
} Rec;

extern Rec D_243258;

void func_0A5868(Rec *src)
{
    D_243258 = *src;
}
