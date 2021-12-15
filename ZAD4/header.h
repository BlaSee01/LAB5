#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

struct triangle{
int a;
int b;
int c;
};

int obwod(struct triangle a){
    int obw = a.a+a.b+a.c;
    return obw;
}


float pole(struct triangle a){
    float p = obwod(a)/2;
    float po = sqrt(p*(p-a.a)*(p-a.b)*(p-a.c));
    return po;
}

#endif // HEADER_H_INCLUDED
