/* LEVEL_06:0x075020 -- un message prepare sur la pile puis envoye. */
typedef struct {
    float f[2];
    int   n;
} Sample;

typedef struct {
    Sample s;
    float  v;
} Message;

void func_075058(Message *msg);

void func_075020(Sample *src, float v)
{
    Message msg;

    msg.s = *src;
    msg.v = v;

    func_075058(&msg);
}
