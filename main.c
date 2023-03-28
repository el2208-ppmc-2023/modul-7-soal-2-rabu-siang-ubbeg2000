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
    Node *temp = newNode(n);
    if (queue->rear == NULL){
        queue->front = temp;
        queue->rear = temp;
        return;
    }
    queue->rear->next = temp;
    queue->rear = temp;
}

void hapus(Queue *queue){
    if (queue->front == NULL){
        printf("Belum ada data!\n");
        return;
    }
    Node *temp = queue->front;
    queue->front = queue->front->next;
    if (queue->front == NULL){
        queue->rear = NULL;
    }
    free(temp);
}

int main(){  
    Queue *queue = createQueue();
    int pilihan, angka, data = 0;

    printf("Pilihan menu:\n");
    printf("1. Tambah Data\n");
    printf("2. Hapus Data\n");
    printf("3. Selesai\n");

    printf("\nMasukan pilihan: ");
    scanf("%d", &pilihan);
    while(pilihan != 3){
        if (pilihan != 1 && pilihan != 2){
            printf("\nMasukan salah!");
            printf("\nMasukan pilihan: ");
            scanf("%d", &pilihan);
        }
        else{    
            if (pilihan == 1){
                printf("Masukan angka  : ");
                scanf("%d", &angka);
                tambah(queue, angka);
                data++;
            }
            else if (pilihan == 2){
                hapus(queue);
                if (data > 0){
                    printf("Data paling depan terhapus\n");
                    data--;
                }
            }
            printf("\nMasukan pilihan: ");
            scanf("%d", &pilihan);
        }
    }

    if (data > 0){
        printf("\nAngka paling depan   : %d", queue->front->data);
        printf("\nAngka paling belakang: %d", queue->rear->data);
    }
    else{
        printf("\nTidak ada data!");
    }
    return 0;
}
