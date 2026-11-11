/* LEVEL_16:0x06E5B8 -- un message prepare sur la pile puis envoye. */
typedef struct {
    float f[2];
    int   n;
} Sample;

typedef struct {
    Sample s;
    float  v;
} Message;

void func_06E5F0(Message *msg);

void func_06E5B8(Sample *src, float v)
{
    Message msg;

    msg.s = *src;
    msg.v = v;

    func_06E5F0(&msg);
}
