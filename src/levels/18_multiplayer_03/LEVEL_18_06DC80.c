/* LEVEL_18:0x06DC80 -- un message prepare sur la pile puis envoye. */
typedef struct {
    float f[2];
    int   n;
} Sample;

typedef struct {
    Sample s;
    float  v;
} Message;

void func_06DCB8(Message *msg);

void func_06DC80(Sample *src, float v)
{
    Message msg;

    msg.s = *src;
    msg.v = v;

    func_06DCB8(&msg);
}
