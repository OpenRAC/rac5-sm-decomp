/* LEVEL_01:0x134FA0 -- incremental run-length stream decoder step: checks the stream header, then expands literal and repeat runs. */

typedef struct Rle {
    int state;
    unsigned char *src;
    unsigned char *dst;
    int pad_0C;
    long long total;
    long long pad_18;
    long long written;
    long long limit;
    long long done;
    char error;
} Rle;

int func_134FA0(Rle *s, int n)
{
    unsigned int used;
    unsigned int lim;
    unsigned char *p;
    unsigned int c;
    int count;
    int i;
    unsigned char val;
    int ok;

    switch (s->state) {
    case 0:
        p = s->src;
        if (p[0] != 'R')
            ok = 0;
        else
            ok = 1;
        if (p[1] != 'E')
            ok = 0;
        if (p[2] != '0')
            ok = 0;
        if (p[3] != '0')
            ok = 0;
        if (ok) {
            s->src = p + 4;
            s->total = *(unsigned int *)(p + 4);
            s->state = 1;
            s->src = p + 12;
        } else {
            s->error = 1;
            s->state = 2;
        }
    case 1:
        used = 0;
        lim = n << 7;
        if (s->done < s->limit && lim != 0) {
            if (s->state == 1) {
                do {
                c = *s->src++;
                count = (c & 0x7F) + 1;
                if (c & 0x80) {
                    val = *s->src++;
                    used++;
                    if (count != 0) {
                        i = count;
                        do {
                            *s->dst++ = val;
                            s->written++;
                            s->done++;
                        } while (--i != 0);
                    }
                } else {
                    used++;
                    if (count != 0) {
                        i = count;
                        do {
                            *s->dst++ = *s->src++;
                            s->written++;
                            s->done++;
                        } while (--i != 0);
                    }
                }
                used += count;
                if (s->written >= s->total)
                    s->state = 2;
                if (!(s->done < s->limit))
                        break;
                if (!(used < lim))
                        break;
                } while (s->state == 1);
            }
        } 
        if (s->limit < s->done) {
            s->error = 1;
            s->state = 2;
        }
    case 2:
        break;
    }
    return s->state;
}
