extern int *func_06AB08(int key);

int func_06A528(void *key)
{
    int *entry = func_06AB08((int)key);
    return entry[1];
}
