/* LEVEL_23:0x003380 -- a 12-byte sample copied into the destination frame. */
typedef struct {
    float x;
    float y;
    int flag;
} Sample;

typedef struct {
    char pad[0x1D8];
    Sample s;
} Frame;

extern Frame *D_001C2654;

void func(Sample *src)
{
    D_001C2654->s = *src;
}
