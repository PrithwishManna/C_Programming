/* Steps
1: Code the TEXT, IMAGE and AUDIO message as 0, 1, and 2 respectively.
○ Create enumerator for the three types of messages – TEXT, IMAGE and AUDIO
2. Create union to store the message content.
3. Create a structure message whose
○ first member is the message type and
○ second member is the message content
4. Take user input and create the corresponding message */

#include<stdio.h>
#include<string.h>

enum MessageType{ TEXT, IMAGE, AUDIO };         // Define the message types

union MessageContent{                           // Union to store different types of message content
    char text[256];
    char imageFileName[128];
    char audioFileName[128];
};

struct Message{                             // Structure to represent a message
    enum MessageType type;
    union MessageContent content;
};

int main(){
    int msgType;
    struct Message message;                 // Allocate memory for the struct
    printf("Enter the message type (0=TEXT, 1=IMAGE, 2=AUDIO)\n");
    scanf("%d", &msgType);
    // --- WRITE PHASE ---
    switch(msgType){
        case TEXT:                          // Create text message
            message.type = TEXT;
            strcpy(message.content.text, "How are you?");
            break;
        
        case IMAGE:                         // Create Image message
            message.type = IMAGE;
            strcpy(message.content.imageFileName, "Image.jpg");
            break;
            
        case AUDIO:                         // Create audio message
            message.type = AUDIO;
            strcpy(message.content.audioFileName, "audio.mp3");
            break;
        
        default:
            printf("Error input!\n");
            return 1;                       // Exit with an error code
    }
    // --- READ PHASE ---
    switch(msgType){
        case TEXT:
            printf("Text Message : %s\n", message.content.text);
            break;
            
        case IMAGE:
            printf("Image Massage: %s\n", message.content.imageFileName);
            break;
        case AUDIO:
            printf("Audio message : %s\n", message.content.audioFileName);
            break;
    }
    
 return 0;                                  // Exit successfully 
}