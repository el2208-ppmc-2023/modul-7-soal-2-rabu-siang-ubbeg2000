/** EL2208 Praktikum Pemecahan Masalah dengan C 2022/2023
 *   Modul               : 
 *   Hari dan Tanggal    :
 *   Nama (NIM)          :
 *   Nama File           : main.c
 *   Deskripsi           :
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
} Node;

typedef struct Queue{
    Node *front, *rear;
} Queue;

Node *newNode(int n){
    Node *temp = (Node*)malloc(sizeof(Node));
    temp->data = n;
    temp->next = NULL;
    return temp;
}

Queue *createQueue(){
    Queue *queue = (Queue*)malloc(sizeof(Queue));
    queue->front = NULL;
    queue->rear = NULL;
    return queue;
}

void tambah(Queue *queue, int n){
    
}

void hapus(Queue *queue){
    printf("Belum ada data!\n");
}

int main(){  
    printf("Pilihan menu:\n");
    printf("1. Tambah Data\n");
    printf("2. Hapus Data\n");
    printf("3. Selesai\n");

    printf("\nMasukan pilihan: ");
    scanf("%d", ...);

    printf("\nMasukan salah!");

    printf("Masukan angka  : ");
    scanf("%d", ...);
    
    printf("Data paling depan terhapus\n");

    printf("\nAngka paling depan   : %d", ...);
    printf("\nAngka paling belakang: %d", ...);

    printf("\nTidak ada data!");
    return 0;
}
