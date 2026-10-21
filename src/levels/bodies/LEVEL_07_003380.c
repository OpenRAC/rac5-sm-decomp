/* LEVEL_07:0x003380 -- a 12-byte sample copied into the destination frame. */
typedef struct {
    float x;
    float y;
    int flag;
} Sample;

typedef struct {
    char pad[0x1D8];
    Sample s;
} Frame;

extern Frame *D_00203554;

void func(Sample *src)
{
    D_00203554->s = *src;
}
