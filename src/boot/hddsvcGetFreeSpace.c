/* boot:0x01EC1518 -- query the free-space value and store it through the caller's pointer. */
extern int hddsvc_query_01EC1188(unsigned int *out);

int hddsvcGetFreeSpace(unsigned int *out)
{
    unsigned int v[4];
    int r;

    r = hddsvc_query_01EC1188(v);
    *out = v[0];
    return r;
}
