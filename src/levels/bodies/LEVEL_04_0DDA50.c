/* LEVEL_04:0x0DDA50 -- l'element courant d'un tableau est copie
   dans un tampon puis passe a une fonction de traitement. */
typedef struct {
    float f[2];
    int   n;
} Sample;

typedef struct {
    Sample items[8];
    int    cur;
    int    idx;
} Queue;

void func_0DD9D8(Queue *queue);

int func_0DDA50(Queue *queue, Sample *out)
{
    if (queue->cur == queue->idx)
        return 0;

    if (out == 0)
        return 0;

    *out = queue->items[queue->idx];
    func_0DD9D8(queue);

    return 1;
}
