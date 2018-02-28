#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_mixer.h>
#include <SDL2/SDL_image.h>
#include <time.h>

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
int main(int argc, char **argv)
{
    int pause,onay,onay2,modonay;
    time_t basla,bit;
    double fark;
    char mod[20];
    char kod[20];
    printf("Display mode is windowed by default. For full-screen type 'max'\n");
    fgets(mod,10,stdin);
    modonay = strcmp(mod,"max\n");
    printf("\nCheat Code?\n");
    fgets(kod,10,stdin);
    onay = strcmp(kod,"noborder\n");
    onay2 = strcmp(kod,"immortal\n");

    // Initialize SDL
    SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO);

    // Initialize IMG.h
    IMG_Init(IMG_INIT_JPG | IMG_INIT_PNG);


    //Set Mixer
    Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2,2048);
    Mix_Music *bgmusic = Mix_LoadMUS("ses.wav");
    Mix_Music *end = Mix_LoadMUS("end.wav");
    Mix_Chunk *laser = Mix_LoadWAV("laser.wav");
    Mix_Chunk *blow = Mix_LoadWAV("blow.wav");
    // Create a SDL window
    SDL_Window *window = SDL_CreateWindow("Nyan RUN v1.6 Linux - VedFI", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, (SDL_WINDOW_OPENGL));

    if(modonay==0){
    SDL_ShowCursor(SDL_DISABLE);
    SDL_SetWindowFullscreen(window,SDL_WINDOW_FULLSCREEN);
    }
    // Create a renderer (accelerated and in sync with the display refresh rate)
    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

    //TEXT


    //IMAGE Add
    SDL_Surface *intro = IMG_Load("intro.png");
    SDL_Texture *introtexture = SDL_CreateTextureFromSurface(renderer, intro);
    SDL_FreeSurface(intro);

    SDL_Surface *vedfi = IMG_Load("vedfi.png");
    SDL_Texture *vedfitexture = SDL_CreateTextureFromSurface(renderer, vedfi);
    SDL_FreeSurface(vedfi);

    SDL_Surface *ates = IMG_Load("ates.png");
    SDL_Texture *atestexture = SDL_CreateTextureFromSurface(renderer, ates);
    SDL_FreeSurface(ates);

    SDL_Surface *dog = IMG_Load("dog.png");
    SDL_Texture *dogtexture = SDL_CreateTextureFromSurface(renderer, dog);
    SDL_FreeSurface(dog);

    SDL_Surface *pauze = IMG_Load("pause.png");
    SDL_Texture *pauzetexture = SDL_CreateTextureFromSurface(renderer, pauze);
    SDL_FreeSurface(pauze);

    SDL_Surface *stage2 = IMG_Load("stage2.png");
    SDL_Texture *stage2texture = SDL_CreateTextureFromSurface(renderer, stage2);
    SDL_FreeSurface(stage2);

    SDL_Surface *stage3 = IMG_Load("stage3.png");
    SDL_Texture *stage3texture = SDL_CreateTextureFromSurface(renderer, stage3);
    SDL_FreeSurface(stage3);

    SDL_Surface *stage4 = IMG_Load("stage4.png");
    SDL_Texture *stage4texture = SDL_CreateTextureFromSurface(renderer, stage4);
    SDL_FreeSurface(stage4);

    SDL_Surface *engel = IMG_Load("engel.png");
    SDL_Texture *engeltexture = SDL_CreateTextureFromSurface(renderer, engel);
    SDL_FreeSurface(engel);

    SDL_Surface *image = IMG_Load("cat.png");
    SDL_Texture *imagetexture = SDL_CreateTextureFromSurface(renderer, image);
    SDL_FreeSurface(image);

    SDL_Surface *arkaplan = IMG_Load("mavi.png");
    SDL_Texture *arkaplantexture = SDL_CreateTextureFromSurface(renderer, arkaplan);
    SDL_FreeSurface(arkaplan);

    SDL_Surface *arkaplan2 = IMG_Load("yesl.png");
    SDL_Texture *arkaplan2texture = SDL_CreateTextureFromSurface(renderer, arkaplan2);
    SDL_FreeSurface(arkaplan2);

    SDL_Surface *arkaplan3 = IMG_Load("turuncu.png");
    SDL_Texture *arkaplan3texture = SDL_CreateTextureFromSurface(renderer, arkaplan3);
    SDL_FreeSurface(arkaplan3);

    SDL_Surface *arkaplan4 = IMG_Load("outro.png");
    SDL_Texture *arkaplan4texture = SDL_CreateTextureFromSurface(renderer, arkaplan4);
    SDL_FreeSurface(arkaplan4);


    system("clear");

    if(onay == 0 || onay2 == 0)
    {
        system("echo -e \"\e[37m\e[41m\"");
        printf("\nCHEAT ACTIVATED!\n\a");
    }

    //IMAGE Location
    SDL_Rect vedfikonum = {0,567,800,33};

    SDL_Rect pauzekonum = {0,0,800,567};
    SDL_Rect stage2konum = {10700,258,300,100};
    SDL_Rect stage3konum = {18700,258,300,100};
    SDL_Rect stage4konum = {26700,258,300,100};

    SDL_Rect dogkonum = {4000,0,100,70};
    SDL_Rect dogkonum2 = {5000,200,100,70};
    SDL_Rect dogkonum3 = {6000,300,100,70};
    SDL_Rect dogkonum4 = {8000,100,100,70};
    SDL_Rect dogkonum5 = {8500,200,100,70};
    SDL_Rect dogkonum6 = {9000,400,100,70};
    SDL_Rect dogkonum7 = {9750,100,100,70};

    SDL_Rect ydogkonum = {11200,200,100,70};
    SDL_Rect ydogkonum2 = {13000,100,100,70};
    SDL_Rect ydogkonum3 = {14700,400,100,70};
    SDL_Rect ydogkonum4 = {17000,0,100,70};

    SDL_Rect tdogkonum = {21000,500,100,70};
    SDL_Rect tdogkonum3 = {24000,400,100,70};
    SDL_Rect tdogkonum4 = {26000,100,100,70};

    SDL_Rect kdogkonum = {29000,500,100,70};
    SDL_Rect kdogkonum2 = {31000,200,100,70};
    SDL_Rect kdogkonum3 = {31600,400,100,70};

    SDL_Rect e1;
    e1.x = 2800;
    e1.y = 0;
    e1.w = 100;
    e1.h = 70;

    SDL_Rect e2;
    e2.x = 3300;
    e2.y = 300;
    e2.w = 100;
    e2.h = 70;

    SDL_Rect e3;
    e3.x = 3600;
    e3.y = 400;
    e3.w = 100;
    e3.h = 70;

    SDL_Rect e4;
    e4.x = 3900;
    e4.y = 200;
    e4.w = 100;
    e4.h = 70;

    SDL_Rect e5;
    e5.x = 4000;
    e5.y = 100;
    e5.w = 100;
    e5.h = 70;

    SDL_Rect e6;
    e6.x = 4300;
    e6.y = 100;
    e6.w = 100;
    e6.h = 70;

    SDL_Rect e7;
    e7.x = 4600;
    e7.y = 200;
    e7.w = 100;
    e7.h = 70;

    SDL_Rect e8;
    e8.x = 4900;
    e8.y = 300;
    e8.w = 100;
    e8.h = 70;

    SDL_Rect e9;
    e9.x = 5200;
    e9.y = 400;
    e9.w = 100;
    e9.h = 70;

    SDL_Rect e10;
    e10.x = 5500;
    e10.y = 100;
    e10.w = 100;
    e10.h = 70;

    SDL_Rect e11;
    e11.x = 5800;
    e11.y = 100;
    e11.w = 100;
    e11.h = 70;

    SDL_Rect e12 = {6100, 400, 100, 70};
    SDL_Rect e13 = {6400, 100, 100, 70};
    SDL_Rect e14 = {6700, 200, 100, 70};
    SDL_Rect e15 = {7000, 200, 100, 70};
    SDL_Rect e16 = {7700, 300, 100, 70};
    SDL_Rect e17 = {8400, 400, 100, 70};
    SDL_Rect e18 = {8600, 0, 100, 70};
    SDL_Rect e19 = {8800, 100, 100, 70};
    SDL_Rect e20 = {9000, 200, 100, 70};
    SDL_Rect e21 = {9300, 500, 100, 70};
    SDL_Rect e22 = {9400, 300, 100, 70};
    SDL_Rect e23 = {9700, 400, 100, 70};
    SDL_Rect e24 = {10000, 0, 100, 70};

    SDL_Rect ey1 = {11600, 0, 100, 70};
    SDL_Rect ey2 = {11900, 100, 100, 70};
    SDL_Rect ey3 = {12400, 300, 100, 70};
    SDL_Rect ey4 = {12700, 200, 100, 70};
    SDL_Rect ey5 = {13000, 300, 100, 70};
    SDL_Rect ey6 = {13000, 400, 100, 70};
    SDL_Rect ey7 = {13600, 0, 100, 70};
    SDL_Rect ey8 = {14000, 100, 100, 70};
    SDL_Rect ey9 = {14400, 200, 100, 70};
    SDL_Rect ey10 = {14500, 300, 100, 70};
    SDL_Rect ey11 = {15000, 500, 100, 70};
    SDL_Rect ey12 = {15500, 100, 100, 70};
    SDL_Rect ey13 = {15700, 200, 100, 70};
    SDL_Rect ey14 = {16500, 400, 100, 70};
    SDL_Rect ey15 = {16800, 200, 100, 70};
    SDL_Rect ey16 = {16900, 100, 100, 70};

    SDL_Rect et1 = {19300, 0, 100, 70};
    SDL_Rect et2 = {19640, 100, 100, 70};
    SDL_Rect et3 = {19800, 100, 100, 70};
    SDL_Rect et4 = {19960, 200, 100, 70};
    SDL_Rect et5 = {20020, 300, 100, 70};
    SDL_Rect et6 = {20100, 200, 100, 70};
    SDL_Rect et7 = {20260, 400, 100, 70};
    SDL_Rect et8 = {21260, 400, 100, 70};
    SDL_Rect et9 = {21320, 300, 100, 70};
    SDL_Rect et10 = {21400, 200, 100, 70};
    SDL_Rect et11 = {23000, 200, 100, 70};
    SDL_Rect et12 = {23320, 300, 100, 70};
    SDL_Rect et13 = {23400, 100, 100, 70};
    SDL_Rect et14 = {24200, 0, 100, 70};
    SDL_Rect et15 = {24200, 100, 100, 70};
    SDL_Rect et16 = {24200, 200, 100, 70};
    SDL_Rect et17 = {24200, 300, 100, 70};
    SDL_Rect et18 = {25800, 0, 100, 70};
    SDL_Rect et20 = {25800, 200, 100, 70};
    SDL_Rect et21 = {25800, 300, 100, 70};
    SDL_Rect et22 = {25800, 400, 100, 70};
    SDL_Rect et23 = {25800, 500, 100, 70};

    SDL_Rect ek1 = {28200, 0, 100, 70};
    SDL_Rect ek2 = {28360, 100, 100, 70};
    SDL_Rect ek3 = {28440, 200, 100, 70};
    SDL_Rect ek4 = {28600, 300, 100, 70};
    SDL_Rect ek5 = {28760, 400, 100, 70};
    SDL_Rect ek6 = {28840, 0, 100, 70};
    SDL_Rect ek7 = {29000, 300, 100, 70};
    SDL_Rect ek8 = {29160, 200, 100, 70};
    SDL_Rect ek9 = {29240, 0, 100, 70};
    SDL_Rect ek10 = {30600, 100, 100, 70};
    SDL_Rect ek11 = {30600, 200, 100, 70};
    SDL_Rect ek12 = {30600, 300, 100, 70};


    SDL_Rect texture_destination;
    texture_destination.x = 0;
    texture_destination.y = 300;
    texture_destination.w = 100;
    texture_destination.h = 70;

    SDL_Rect texture_destination3;
    texture_destination3.x = 0;
    texture_destination3.y = 0;
    texture_destination3.w = 2700;
    texture_destination3.h = 567;

    SDL_Rect texture_destination2;
    texture_destination2.x = 2700;
    texture_destination2.y = 0;
    texture_destination2.w = 8000;
    texture_destination2.h = 567;

    SDL_Rect texture_destination4;
    texture_destination4.x = 10700;
    texture_destination4.y = 0;
    texture_destination4.w = 8000;
    texture_destination4.h = 567;

    SDL_Rect texture_destination5;
    texture_destination5.x = 18700;
    texture_destination5.y = 0;
    texture_destination5.w = 8000;
    texture_destination5.h = 567;

    SDL_Rect texture_destination6;
    texture_destination6.x = 26700;
    texture_destination6.y = 0;
    texture_destination6.w = 8000;
    texture_destination6.h = 567;

    SDL_Rect ateskonum = {0,texture_destination.y,100,70};
    //timer

    time(&basla);
    //Mix_VolumeMusic(50);
    Mix_PlayMusic(bgmusic,-1);
    pause = 0;
    bool running = true;
    SDL_Event event;
    while(running)
    {
        // Process events
        while(SDL_PollEvent(&event))
        {
           if(event.type == SDL_QUIT)
            {
                running = false;
            }
            else if(event.type == SDL_KEYDOWN)
            {
                switch(event.key.keysym.sym)
               {
                case SDLK_UP:
                    if (onay == 0)
                    {
                        texture_destination.y -=100;
                    }
                    else if (texture_destination.y == 0)
                    {
                        texture_destination.y = texture_destination.y;
                    }
                    else
                    {
                        texture_destination.y -=100;
                    }
                  break;
                case SDLK_DOWN:
                    if (onay == 0)
                    {
                        texture_destination.y +=100;
                    }
                    else if (texture_destination.y == 500)
                    {
                        texture_destination.y = texture_destination.y;
                    }
                    else
                    {
                        texture_destination.y +=100;
                    }

                    break;
                case SDLK_x:
                    {
                        ateskonum.x = 0;
                        ateskonum.y = texture_destination.y;
                        Mix_PlayChannel(2,laser,0);
                        break;
                    }
                case SDLK_ESCAPE:
                    {
                        running = false;
                        printf("\aQUIT.\n");
                        break;
                    }
                case SDLK_p:
                    {
                        pause = 1;
                        SDL_RenderCopy(renderer, pauzetexture, NULL, &pauzekonum);
                        SDL_RenderPresent(renderer);
                        Mix_PauseMusic();
                        while(pause==1)
                            if(SDL_WaitEvent(&event))
                            if(event.type == SDL_KEYDOWN)
                                switch(event.key.keysym.sym)
                            {
                            case SDLK_SPACE:
                                {
                                pause =0;
                                Mix_ResumeMusic();
                                break;
                                }
                            case SDLK_ESCAPE:
                                {
                                running = false;
                                pause =0;
                                printf("\aQUIT.\n");
                                break;
                                }
                            }
                    }
                    break;
                default:
                    {
                        printf("\a");
                    }

               }
            }
        }

           if (SDL_AUDIO_PLAYING)
            {
               if(onay2 != 0){

                if((e1.x+10<=texture_destination.x+100 && texture_destination.y == e1.y) && (e1.x+100>texture_destination.x+100 && e1.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);

                }
                if((e2.x+10<=texture_destination.x+100 && texture_destination.y == e2.y) && (e2.x+100>texture_destination.x+100 && e2.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if(((e3.x+10<=texture_destination.x+100 && texture_destination.y == e3.y) && (e3.x+100>texture_destination.x+100 && e3.y == texture_destination.y))
                     || ((e3.x+10<=texture_destination.x && texture_destination.y == e3.y) && (e3.x+100>texture_destination.x && e3.y == texture_destination.y)))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((e4.x+10<=texture_destination.x+100 && texture_destination.y == e4.y) && (e4.x+100>texture_destination.x+100 && e4.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((e5.x+10<=texture_destination.x+100 && texture_destination.y == e5.y) && (e5.x+100>texture_destination.x+100 && e5.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((e6.x+10<=texture_destination.x+100 && texture_destination.y == e6.y) && (e6.x+100>texture_destination.x+100 && e6.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((e7.x+10<=texture_destination.x+100 && texture_destination.y == e7.y) && (e7.x+100>texture_destination.x+100 && e7.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((e8.x+10<=texture_destination.x+100 && texture_destination.y == e8.y) && (e8.x+100>texture_destination.x+100 && e8.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((e9.x+10<=texture_destination.x+100 && texture_destination.y == e9.y) && (e9.x+100>texture_destination.x+100 && e9.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((e10.x+10<=texture_destination.x+100 && texture_destination.y == e10.y) && (e10.x+100>texture_destination.x+100 && e10.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((e11.x+10<=texture_destination.x+100 && texture_destination.y == e11.y) && (e11.x+100>texture_destination.x+100 && e11.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((e12.x+10<=texture_destination.x+100 && texture_destination.y == e12.y) && (e12.x+100>texture_destination.x+100 && e12.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((e13.x+10<=texture_destination.x+100 && texture_destination.y == e13.y) && (e13.x+100>texture_destination.x+100 && e13.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((e14.x+10<=texture_destination.x+100 && texture_destination.y == e14.y) && (e14.x+100>texture_destination.x+100 && e14.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((e15.x+10<=texture_destination.x+100 && texture_destination.y == e15.y) && (e15.x+100>texture_destination.x+100 && e15.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((e16.x+10<=texture_destination.x+100 && texture_destination.y == e16.y) && (e16.x+100>texture_destination.x+100 && e16.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((e17.x+10<=texture_destination.x+100 && texture_destination.y == e17.y) && (e17.x+100>texture_destination.x+100 && e17.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
               if((e18.x+10<=texture_destination.x+100 && texture_destination.y == e18.y) && (e18.x+100>texture_destination.x+100 && e18.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((e19.x+10<=texture_destination.x+100 && texture_destination.y == e19.y) && (e19.x+100>texture_destination.x+100 && e19.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((e20.x+10<=texture_destination.x+100 && texture_destination.y == e20.y) && (e20.x+100>texture_destination.x+100 && e20.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((e21.x+10<=texture_destination.x+100 && texture_destination.y == e21.y) && (e21.x+100>texture_destination.x+100 && e21.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((e22.x+10<=texture_destination.x+100 && texture_destination.y == e22.y) && (e22.x+100>texture_destination.x+100 && e22.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((e23.x+10<=texture_destination.x+100 && texture_destination.y == e23.y) && (e23.x+100>texture_destination.x+100 && e23.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((e24.x+10<=texture_destination.x+100 && texture_destination.y == e24.y) && (e24.x+100>texture_destination.x+100 && e24.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }

                if((ey1.x+10<=texture_destination.x+100 && texture_destination.y == ey1.y) && (ey1.x+100>texture_destination.x+100 && ey1.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }

                if((ey2.x+10<=texture_destination.x+100 && texture_destination.y == ey2.y) && (ey2.x+100>texture_destination.x+100 && ey2.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }

                if((ey3.x+10<=texture_destination.x+100 && texture_destination.y == ey3.y) && (ey3.x+100>texture_destination.x+100 && ey3.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }

                if((ey4.x+10<=texture_destination.x+100 && texture_destination.y == ey4.y) && (ey4.x+100>texture_destination.x+100 && ey4.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }

                if((ey5.x+10<=texture_destination.x+100 && texture_destination.y == ey5.y) && (ey5.x+100>texture_destination.x+100 && ey5.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }

                if((ey6.x+10<=texture_destination.x+100 && texture_destination.y == ey6.y) && (ey6.x+100>texture_destination.x+100 && ey6.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }

                if((ey7.x+10<=texture_destination.x+100 && texture_destination.y == ey7.y) && (ey7.x+100>texture_destination.x+100 && ey7.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }

                if((ey8.x+10<=texture_destination.x+100 && texture_destination.y == ey8.y) && (ey8.x+100>texture_destination.x+100 && ey8.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }

                if((ey9.x+10<=texture_destination.x+100 && texture_destination.y == ey9.y) && (ey9.x+100>texture_destination.x+100 && ey9.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }

                if((ey10.x+10<=texture_destination.x+100 && texture_destination.y == ey10.y) && (ey10.x+100>texture_destination.x+100 && ey10.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }

                if((ey11.x+10<=texture_destination.x+100 && texture_destination.y == ey11.y) && (ey11.x+100>texture_destination.x+100 && ey11.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }

                if((ey12.x+10<=texture_destination.x+100 && texture_destination.y == ey12.y) && (ey12.x+100>texture_destination.x+100 && ey12.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }

                if((ey13.x+10<=texture_destination.x+100 && texture_destination.y == ey13.y) && (ey13.x+100>texture_destination.x+100 && ey13.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }

                if((ey14.x+10<=texture_destination.x+100 && texture_destination.y == ey14.y) && (ey14.x+100>texture_destination.x+100 && ey14.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }

                if((ey15.x+10<=texture_destination.x+100 && texture_destination.y == ey15.y) && (ey15.x+100>texture_destination.x+100 && ey15.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }

                if((ey16.x+10<=texture_destination.x+100 && texture_destination.y == ey16.y) && (ey16.x+100>texture_destination.x+100 && ey16.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }

                if((et1.x+10<=texture_destination.x+100 && texture_destination.y == et1.y) && (et1.x+100>texture_destination.x+100 && et1.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((et2.x+10<=texture_destination.x+100 && texture_destination.y == et2.y) && (et2.x+100>texture_destination.x+100 && et2.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((et3.x+10<=texture_destination.x+100 && texture_destination.y == et3.y) && (et3.x+100>texture_destination.x+100 && et3.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((et4.x+10<=texture_destination.x+100 && texture_destination.y == et4.y) && (et4.x+100>texture_destination.x+100 && et4.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((et5.x+10<=texture_destination.x+100 && texture_destination.y == et5.y) && (et5.x+100>texture_destination.x+100 && et5.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((et6.x+10<=texture_destination.x+100 && texture_destination.y == et6.y) && (et6.x+100>texture_destination.x+100 && et6.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((et7.x+10<=texture_destination.x+100 && texture_destination.y == et7.y) && (et7.x+100>texture_destination.x+100 && et7.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((et8.x+10<=texture_destination.x+100 && texture_destination.y == et8.y) && (et8.x+100>texture_destination.x+100 && et8.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((et9.x+10<=texture_destination.x+100 && texture_destination.y == et9.y) && (et9.x+100>texture_destination.x+100 && et9.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((et10.x+10<=texture_destination.x+100 && texture_destination.y == et10.y) && (et10.x+100>texture_destination.x+100 && et10.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((et11.x+10<=texture_destination.x+100 && texture_destination.y == et11.y) && (et11.x+100>texture_destination.x+100 && et11.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((et12.x+10<=texture_destination.x+100 && texture_destination.y == et12.y) && (et12.x+100>texture_destination.x+100 && et12.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((et13.x+10<=texture_destination.x+100 && texture_destination.y == et13.y) && (et13.x+100>texture_destination.x+100 && et13.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((et14.x+10<=texture_destination.x+100 && texture_destination.y == et14.y) && (et14.x+100>texture_destination.x+100 && et14.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((et15.x+10<=texture_destination.x+100 && texture_destination.y == et15.y) && (et15.x+100>texture_destination.x+100 && et15.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((et16.x+10<=texture_destination.x+100 && texture_destination.y == et16.y) && (et16.x+100>texture_destination.x+100 && et16.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((et17.x+10<=texture_destination.x+100 && texture_destination.y == et17.y) && (et17.x+100>texture_destination.x+100 && et17.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((et18.x+10<=texture_destination.x+100 && texture_destination.y == et18.y) && (et18.x+100>texture_destination.x+100 && et18.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((et20.x+10<=texture_destination.x+100 && texture_destination.y == et20.y) && (et20.x+100>texture_destination.x+100 && et20.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((et21.x+10<=texture_destination.x+100 && texture_destination.y == et21.y) && (et21.x+100>texture_destination.x+100 && et21.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((et22.x+10<=texture_destination.x+100 && texture_destination.y == et22.y) && (et22.x+100>texture_destination.x+100 && et22.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((et23.x+10<=texture_destination.x+100 && texture_destination.y == et23.y) && (et23.x+100>texture_destination.x+100 && et23.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((ek1.x+10<=texture_destination.x+100 && texture_destination.y == ek1.y) && (ek1.x+100>texture_destination.x+100 && ek1.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((ek2.x+10<=texture_destination.x+100 && texture_destination.y == ek2.y) && (ek2.x+100>texture_destination.x+100 && ek2.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((ek3.x+10<=texture_destination.x+100 && texture_destination.y == ek3.y) && (ek3.x+100>texture_destination.x+100 && ek3.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((ek4.x+10<=texture_destination.x+100 && texture_destination.y == ek4.y) && (ek4.x+100>texture_destination.x+100 && ek4.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((ek5.x+10<=texture_destination.x+100 && texture_destination.y == ek5.y) && (ek5.x+100>texture_destination.x+100 && ek5.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((ek6.x+10<=texture_destination.x+100 && texture_destination.y == ek6.y) && (ek6.x+100>texture_destination.x+100 && ek6.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((ek7.x+10<=texture_destination.x+100 && texture_destination.y == ek7.y) && (ek7.x+100>texture_destination.x+100 && ek7.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((ek8.x+10<=texture_destination.x+100 && texture_destination.y == ek8.y) && (ek8.x+100>texture_destination.x+100 && ek8.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((ek9.x+10<=texture_destination.x+100 && texture_destination.y == ek9.y) && (ek9.x+100>texture_destination.x+100 && ek9.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((ek10.x+10<=texture_destination.x+100 && texture_destination.y == ek10.y) && (ek10.x+100>texture_destination.x+100 && ek10.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((ek11.x+10<=texture_destination.x+100 && texture_destination.y == ek11.y) && (ek11.x+100>texture_destination.x+100 && ek11.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((ek12.x+10<=texture_destination.x+100 && texture_destination.y == ek12.y) && (ek12.x+100>texture_destination.x+100 && ek12.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }

                if(ateskonum.x > 800)
                {
                    ateskonum.x = -800000;
                }

                 //KOPEK VE ATES CARPISMA//

                if((dogkonum.x<=ateskonum.x+100 && ateskonum.y == dogkonum.y) && (dogkonum.x+100>ateskonum.x+100 && dogkonum.y == ateskonum.y))
                {
                    dogkonum.x = -80000;
                    dogkonum.y = -80000;
                    Mix_PlayChannel(2,blow,0);
                }

                if((dogkonum2.x<=ateskonum.x+100 && ateskonum.y == dogkonum2.y) && (dogkonum2.x+100>ateskonum.x+100 && dogkonum2.y == ateskonum.y))
                {
                    dogkonum2.x = -80000;
                    dogkonum2.y = -80000;
                    Mix_PlayChannel(2,blow,0);
                }

                if((dogkonum3.x<=ateskonum.x+100 && ateskonum.y == dogkonum3.y) && (dogkonum3.x+100>ateskonum.x+100 && dogkonum3.y == ateskonum.y))
                {
                    dogkonum3.x = -80000;
                    dogkonum3.y = -80000;
                    Mix_PlayChannel(2,blow,0);
                }

                if((dogkonum4.x<=ateskonum.x+100 && ateskonum.y == dogkonum4.y) && (dogkonum4.x+100>ateskonum.x+100 && dogkonum4.y == ateskonum.y))                {
                    dogkonum4.x = -80000;
                    dogkonum4.y = -80000;
                    Mix_PlayChannel(2,blow,0);
                }

                if((dogkonum5.x<=ateskonum.x+100 && ateskonum.y == dogkonum5.y) && (dogkonum5.x+100>ateskonum.x+100 && dogkonum5.y == ateskonum.y))                {
                    dogkonum5.x = -80000;
                    dogkonum5.y = -80000;
                    Mix_PlayChannel(2,blow,0);
                }

                if((dogkonum6.x<=ateskonum.x+100 && ateskonum.y == dogkonum6.y) && (dogkonum6.x+100>ateskonum.x+100 && dogkonum6.y == ateskonum.y))                {
                    dogkonum6.x = -80000;
                    dogkonum6.y = -80000;
                    Mix_PlayChannel(2,blow,0);
                }

                if((dogkonum7.x<=ateskonum.x+100 && ateskonum.y == dogkonum7.y) && (dogkonum7.x+100>ateskonum.x+100 && dogkonum7.y == ateskonum.y))                {
                    dogkonum7.x = -80000;
                    dogkonum7.y = -80000;
                    Mix_PlayChannel(2,blow,0);
                }

                if((ydogkonum.x<=ateskonum.x+100 && ateskonum.y == ydogkonum.y) && (ydogkonum.x+100>ateskonum.x+100 && ydogkonum.y == ateskonum.y))                {
                    ydogkonum.x = -80000;
                    ydogkonum.y = -80000;
                    Mix_PlayChannel(2,blow,0);
                }
                if((ydogkonum2.x<=ateskonum.x+100 && ateskonum.y == ydogkonum2.y) && (ydogkonum2.x+100>ateskonum.x+100 && ydogkonum2.y == ateskonum.y))                   {
                    ydogkonum2.x = -80000;
                    ydogkonum2.y = -80000;
                    Mix_PlayChannel(2,blow,0);
                }
                if((ydogkonum3.x<=ateskonum.x+100 && ateskonum.y == ydogkonum3.y) && (ydogkonum3.x+100>ateskonum.x+100 && ydogkonum3.y == ateskonum.y))                   {
                    ydogkonum3.x = -80000;
                    ydogkonum3.y = -80000;
                    Mix_PlayChannel(2,blow,0);
                }
                if((ydogkonum4.x<=ateskonum.x+100 && ateskonum.y == ydogkonum4.y) && (ydogkonum4.x+100>ateskonum.x+100 && ydogkonum4.y == ateskonum.y))                   {
                    ydogkonum4.x = -80000;
                    ydogkonum4.y = -80000;
                    Mix_PlayChannel(2,blow,0);
                }


                if((tdogkonum.x<=ateskonum.x+100 && ateskonum.y == tdogkonum.y) && (tdogkonum.x+100>ateskonum.x+100 && tdogkonum.y == ateskonum.y))                   {
                    tdogkonum.x = -80000;
                    tdogkonum.y = -80000;
                    Mix_PlayChannel(2,blow,0);
                }
                if((tdogkonum3.x<=ateskonum.x+100 && ateskonum.y == tdogkonum3.y) && (tdogkonum3.x+100>ateskonum.x+100 && tdogkonum3.y == ateskonum.y))                   {
                    tdogkonum3.x = -80000;
                    tdogkonum3.y = -80000;
                    Mix_PlayChannel(2,blow,0);
                }
                if((tdogkonum4.x<=ateskonum.x+100 && ateskonum.y == tdogkonum4.y) && (tdogkonum4.x+100>ateskonum.x+100 && tdogkonum4.y == ateskonum.y))                   {
                    tdogkonum4.x = -80000;
                    tdogkonum4.y = -80000;
                    Mix_PlayChannel(2,blow,0);
                }

                if((kdogkonum.x<=ateskonum.x+100 && ateskonum.y == kdogkonum.y) && (kdogkonum.x+100>ateskonum.x+100 && kdogkonum.y == ateskonum.y))                 {
                    kdogkonum.x = -80000;
                    kdogkonum.y = -80000;
                    Mix_PlayChannel(2,blow,0);
                }
                if((kdogkonum2.x<=ateskonum.x+100 && ateskonum.y == kdogkonum2.y) && (kdogkonum2.x+100>ateskonum.x+100 && kdogkonum2.y == ateskonum.y))                 {
                    kdogkonum2.x = -80000;
                    kdogkonum2.y = -80000;
                    Mix_PlayChannel(2,blow,0);
                }
                if((kdogkonum3.x<=ateskonum.x+100 && ateskonum.y == kdogkonum3.y) && (kdogkonum3.x+100>ateskonum.x+100 && kdogkonum3.y == ateskonum.y))                 {
                    kdogkonum3.x = -80000;
                    kdogkonum3.y = -80000;
                    Mix_PlayChannel(2,blow,0);
                }
                 //KOPEK VE KEDI CARPISMA//

                if((dogkonum.x+10<=texture_destination.x+100 && texture_destination.y == dogkonum.y) && (dogkonum.x+100>texture_destination.x+100 && dogkonum.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }

                if((dogkonum2.x+10<=texture_destination.x+100 && texture_destination.y == dogkonum2.y) && (dogkonum2.x+100>texture_destination.x+100 && dogkonum2.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }

                if((dogkonum3.x+10<=texture_destination.x+100 && texture_destination.y == dogkonum3.y) && (dogkonum3.x+100>texture_destination.x+100 && dogkonum3.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }

                if((dogkonum4.x+10<=texture_destination.x+100 && texture_destination.y == dogkonum4.y) && (dogkonum4.x+100>texture_destination.x+100 && dogkonum4.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }

                if((dogkonum5.x+10<=texture_destination.x+100 && texture_destination.y == dogkonum5.y) && (dogkonum5.x+100>texture_destination.x+100 && dogkonum5.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }

                if((dogkonum6.x+10<=texture_destination.x+100 && texture_destination.y == dogkonum6.y) && (dogkonum6.x+100>texture_destination.x+100 && dogkonum6.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }

                if((dogkonum7.x+10<=texture_destination.x+100 && texture_destination.y == dogkonum7.y) && (dogkonum7.x+100>texture_destination.x+100 && dogkonum7.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }

                if((ydogkonum.x+10<=texture_destination.x+100 && texture_destination.y == ydogkonum.y) && (ydogkonum.x+100>texture_destination.x+100 && ydogkonum.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((ydogkonum2.x+10<=texture_destination.x+100 && texture_destination.y == ydogkonum2.y) && (ydogkonum2.x+100>texture_destination.x+100 && ydogkonum2.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((ydogkonum3.x+10<=texture_destination.x+100 && texture_destination.y == ydogkonum3.y) && (ydogkonum3.x+100>texture_destination.x+100 && ydogkonum3.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((ydogkonum4.x+10<=texture_destination.x+100 && texture_destination.y == ydogkonum4.y) && (ydogkonum4.x+100>texture_destination.x+100 && ydogkonum4.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }


                if((tdogkonum.x+10<=texture_destination.x+100 && texture_destination.y == tdogkonum.y) && (tdogkonum.x+100>texture_destination.x+100 && tdogkonum.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((tdogkonum3.x+10<=texture_destination.x+100 && texture_destination.y == tdogkonum3.y) && (tdogkonum3.x+100>texture_destination.x+100 && tdogkonum3.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((tdogkonum4.x+10<=texture_destination.x+100 && texture_destination.y == tdogkonum4.y) && (tdogkonum4.x+100>texture_destination.x+100 && tdogkonum4.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }

                if((kdogkonum.x+10<=texture_destination.x+100 && texture_destination.y == kdogkonum.y) && (kdogkonum.x+100>texture_destination.x+100 && kdogkonum.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((kdogkonum2.x+10<=texture_destination.x+100 && texture_destination.y == kdogkonum2.y) && (kdogkonum2.x+100>texture_destination.x+100 && kdogkonum2.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
                if((kdogkonum3.x+10<=texture_destination.x+100 && texture_destination.y == kdogkonum3.y) && (kdogkonum3.x+100>texture_destination.x+100 && kdogkonum3.y == texture_destination.y))
                {
                Mix_PlayMusic(end,1);
                delay(2000);
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getchar();
                SDL_Quit();
                exit(1);
                }
               }


                if(texture_destination3.x>-2700 && texture_destination3.x<800)
                {
                    delay(10);
                    ateskonum.x +=20;
                    dogkonum.x -=5;
                    dogkonum2.x -=5;
                    dogkonum3.x -=5;
                    dogkonum4.x -=5;
                    dogkonum5.x -=5;
                    dogkonum6.x -=5;
                    dogkonum7.x -=5;
                    ydogkonum.x -=5;
                    ydogkonum2.x -=5;
                    ydogkonum3.x -=5;
                    ydogkonum4.x -=5;
                    tdogkonum.x -=5;
                    tdogkonum3.x -=5;
                    tdogkonum4.x -=5;
                    kdogkonum.x -=5;
                    kdogkonum2.x -=5;
                    kdogkonum3.x -=5;
                    stage2konum.x -=5;
                    stage3konum.x -=5;
                    stage4konum.x -=5;
                    texture_destination2.x -=5;
                    texture_destination4.x -=5;
                    texture_destination5.x -=5;
                    texture_destination6.x -=5;
                    texture_destination3.x -=5;
                        e1.x -=5;
                        e2.x -=5;
                        e3.x -=5;
                        e4.x -=5;
                        e5.x -=5;
                        e6.x -=5;
                        e7.x -=5;
                        e8.x -=5;
                        e9.x -=5;
                        e10.x -=5;
                        e11.x -=5;
                        e12.x -=5;
                        e13.x -=5;
                        e14.x -=5;
                        e15.x -=5;
                        e16.x -=5;
                        e17.x -=5;
                        e18.x -=5;
                        e19.x -=5;
                        e20.x -=5;
                        e21.x -=5;
                        e22.x -=5;
                        e23.x -=5;
                        e24.x -=5;

                            ey1.x -=5;
                            ey2.x -=5;
                            ey3.x -=5;
                            ey4.x -=5;
                            ey5.x -=5;
                            ey6.x -=5;
                            ey7.x -=5;
                            ey8.x -=5;
                            ey9.x -=5;
                            ey10.x -=5;
                            ey11.x -=5;
                            ey12.x -=5;
                            ey13.x -=5;
                            ey14.x -=5;
                            ey15.x -=5;
                            ey16.x -=5;

                                et1.x -=5;
                                et2.x -=5;
                                et3.x -=5;
                                et4.x -=5;
                                et5.x -=5;
                                et6.x -=5;
                                et7.x -=5;
                                et8.x -=5;
                                et9.x -=5;
                                et10.x -=5;
                                et11.x -=5;
                                et12.x -=5;
                                et13.x -=5;
                                et14.x -=5;
                                et15.x -=5;
                                et16.x -=5;
                                et17.x -=5;
                                et18.x -=5;
                                et20.x -=5;
                                et21.x -=5;
                                et22.x -=5;
                                et23.x -=5;

                                        ek1.x -=5;
                                        ek2.x -=5;
                                        ek3.x -=5;
                                        ek4.x -=5;
                                        ek5.x -=5;
                                        ek6.x -=5;
                                        ek7.x -=5;
                                        ek8.x -=5;
                                        ek9.x -=5;
                                        ek10.x -=5;
                                        ek11.x -=5;
                                        ek12.x -=5;

                }
                else if(texture_destination3.x<=-2700 && texture_destination3.x>-11000)
                {
                    delay(10);
                    dogkonum.x -=5;
                    dogkonum2.x -=5;
                    dogkonum3.x -=5;
                    dogkonum4.x -=5;
                    dogkonum5.x -=5;
                    dogkonum6.x -=5;
                    dogkonum7.x -=5;
                    ydogkonum.x -=5;
                    ydogkonum2.x -=5;
                    ydogkonum3.x -=5;
                    ydogkonum4.x -=5;
                    tdogkonum.x -=5;
                    tdogkonum3.x -=5;
                    tdogkonum4.x -=5;
                    kdogkonum.x -=5;
                    kdogkonum2.x -=5;
                    kdogkonum3.x -=5;
                    ateskonum.x +=20;
                    stage2konum.x -=5;
                    stage3konum.x -=5;
                    stage4konum.x -=5;
                    texture_destination2.x -=5;
                    texture_destination4.x -=5;
                    texture_destination5.x -=5;
                    texture_destination6.x -=5;
                    texture_destination3.x -=5;
                        e1.x -=5;
                        e2.x -=5;
                        e3.x -=5;
                        e4.x -=5;
                        e5.x -=5;
                        e6.x -=5;
                        e7.x -=5;
                        e8.x -=5;
                        e9.x -=5;
                        e10.x -=5;
                        e11.x -=5;
                        e12.x -=5;
                        e13.x -=5;
                        e14.x -=5;
                        e15.x -=5;
                        e16.x -=5;
                        e17.x -=5;
                        e18.x -=5;
                        e19.x -=5;
                        e20.x -=5;
                        e21.x -=5;
                        e22.x -=5;
                        e23.x -=5;
                        e24.x -=5;

                            ey1.x -=5;
                            ey2.x -=5;
                            ey3.x -=5;
                            ey4.x -=5;
                            ey5.x -=5;
                            ey6.x -=5;
                            ey7.x -=5;
                            ey8.x -=5;
                            ey9.x -=5;
                            ey10.x -=5;
                            ey11.x -=5;
                            ey12.x -=5;
                            ey13.x -=5;
                            ey14.x -=5;
                            ey15.x -=5;
                            ey16.x -=5;

                                et1.x -=5;
                                et2.x -=5;
                                et3.x -=5;
                                et4.x -=5;
                                et5.x -=5;
                                et6.x -=5;
                                et7.x -=5;
                                et8.x -=5;
                                et9.x -=5;
                                et10.x -=5;
                                et11.x -=5;
                                et12.x -=5;
                                et13.x -=5;
                                et14.x -=5;
                                et15.x -=5;
                                et16.x -=5;
                                et17.x -=5;
                                et18.x -=5;
                                et20.x -=5;
                                et21.x -=5;
                                et22.x -=5;
                                et23.x -=5;

                                        ek1.x -=5;
                                        ek2.x -=5;
                                        ek3.x -=5;
                                        ek4.x -=5;
                                        ek5.x -=5;
                                        ek6.x -=5;
                                        ek7.x -=5;
                                        ek8.x -=5;
                                        ek9.x -=5;
                                        ek10.x -=5;
                                        ek11.x -=5;
                                        ek12.x -=5;


                }
                else if(texture_destination3.x<=-11000 && texture_destination3.x>-19000)
                {
                    delay(10);
                    ateskonum.x +=20;
                    stage2konum.x -=8;
                    stage3konum.x -=8;
                    stage4konum.x -=8;
                    ydogkonum.x -=8;
                    ydogkonum2.x -=8;
                    ydogkonum3.x -=8;
                    ydogkonum4.x -=8;
                    tdogkonum.x -=8;
                    tdogkonum3.x -=8;
                    tdogkonum4.x -=8;
                    kdogkonum.x -=8;
                    kdogkonum2.x -=8;
                    kdogkonum3.x -=8;
                    texture_destination2.x -=8;
                    texture_destination4.x -=8;
                    texture_destination5.x -=8;
                    texture_destination6.x -=8;
                    texture_destination3.x -=8;
                            ey1.x -=8;
                            ey2.x -=8;
                            ey3.x -=8;
                            ey4.x -=8;
                            ey5.x -=8;
                            ey6.x -=8;
                            ey7.x -=8;
                            ey8.x -=8;
                            ey9.x -=8;
                            ey10.x -=8;
                            ey11.x -=8;
                            ey12.x -=8;
                            ey13.x -=8;
                            ey14.x -=8;
                            ey15.x -=8;
                            ey16.x -=8;

                                et1.x -=8;
                                et2.x -=8;
                                et3.x -=8;
                                et4.x -=8;
                                et5.x -=8;
                                et6.x -=8;
                                et7.x -=8;
                                et8.x -=8;
                                et9.x -=8;
                                et10.x -=8;
                                et11.x -=8;
                                et12.x -=8;
                                et13.x -=8;
                                et14.x -=8;
                                et15.x -=8;
                                et16.x -=8;
                                et17.x -=8;
                                et18.x -=8;
                                et20.x -=8;
                                et21.x -=8;
                                et22.x -=8;
                                et23.x -=8;

                                        ek1.x -=8;
                                        ek2.x -=8;
                                        ek3.x -=8;
                                        ek4.x -=8;
                                        ek5.x -=8;
                                        ek6.x -=8;
                                        ek7.x -=8;
                                        ek8.x -=8;
                                        ek9.x -=8;
                                        ek10.x -=8;
                                        ek11.x -=8;
                                        ek12.x -=8;
                }
                else if(texture_destination3.x<=-19000 && texture_destination3.x>-26700)
                {
                    delay(10);
                    ateskonum.x +=20;
                    stage2konum.x -=16;
                    stage3konum.x -=16;
                    stage4konum.x -=16;
                    tdogkonum.x -=16;
                    tdogkonum3.x -=16;
                    tdogkonum4.x -=16;
                    kdogkonum.x -=16;
                    kdogkonum2.x -=16;
                    kdogkonum3.x -=16;
                    texture_destination2.x -=16;
                    texture_destination4.x -=16;
                    texture_destination5.x -=16;
                    texture_destination6.x -=16;
                    texture_destination3.x -=16;

                                et1.x -=16;
                                et2.x -=16;
                                et3.x -=16;
                                et4.x -=16;
                                et5.x -=16;
                                et6.x -=16;
                                et7.x -=16;
                                et8.x -=16;
                                et9.x -=16;
                                et10.x -=16;
                                et11.x -=16;
                                et12.x -=16;
                                et13.x -=16;
                                et14.x -=16;
                                et15.x -=16;
                                et16.x -=16;
                                et17.x -=16;
                                et18.x -=16;
                                et20.x -=16;
                                et21.x -=16;
                                et22.x -=16;
                                et23.x -=16;

                                        ek1.x -=16;
                                        ek2.x -=16;
                                        ek3.x -=16;
                                        ek4.x -=16;
                                        ek5.x -=16;
                                        ek6.x -=16;
                                        ek7.x -=16;
                                        ek8.x -=16;
                                        ek9.x -=16;
                                        ek10.x -=16;
                                        ek11.x -=16;
                                        ek12.x -=16;
                }
                else if(texture_destination3.x<=-26700 && texture_destination3.x>-32300)
                {
                    delay(10);
                    ateskonum.x +=20;
                    kdogkonum.x -=16;
                    kdogkonum2.x -=16;
                    kdogkonum3.x -=16;
                    stage2konum.x -=16;
                    stage3konum.x -=16;
                    stage4konum.x -=16;
                    texture_destination2.x -=16;
                    texture_destination4.x -=16;
                    texture_destination5.x -=16;
                    texture_destination6.x -=16;
                    texture_destination3.x -=16;

                        ek1.x -=16;
                        ek2.x -=16;
                        ek3.x -=16;
                        ek4.x -=16;
                        ek5.x -=16;
                        ek6.x -=16;
                        ek7.x -=16;
                        ek8.x -=16;
                        ek9.x -=16;
                        ek10.x -=16;
                        ek11.x -=16;
                        ek12.x -=16;
                }
                else if(texture_destination3.x<=-32300 && texture_destination3.x>-34700)
                {
                    delay(10);
                    ateskonum.x +=20;
                    texture_destination2.x -=5;
                    texture_destination4.x -=5;
                    texture_destination5.x -=5;
                    texture_destination6.x -=5;
                    texture_destination3.x -=5;
                }
                else if (texture_destination3.x<=34700)
                {
                    Mix_PlayMusic(end,-1);
                    delay(2001);
                    SDL_Quit();
                    time(&bit);
                    fark = difftime(bit,basla);
                    printf("TIME:%g\n",fark*100);
                    printf("DISTANCE:%d\n",texture_destination3.x*-1);
                    getchar();
                    exit(0);
                }
            }

        // Clear screen with black
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);

        //for draw line
                        SDL_RenderCopy(renderer, vedfitexture, NULL, &vedfikonum);
        SDL_RenderCopy(renderer, arkaplantexture, NULL, &texture_destination2);
        SDL_RenderCopy(renderer, arkaplan2texture, NULL, &texture_destination4);
        SDL_RenderCopy(renderer, arkaplan3texture, NULL, &texture_destination5);
        SDL_RenderCopy(renderer, arkaplan4texture, NULL, &texture_destination6);
        SDL_RenderCopy(renderer, introtexture, NULL, &texture_destination3);
        SDL_RenderCopy(renderer, stage2texture, NULL, &stage2konum);
        SDL_RenderCopy(renderer, stage3texture, NULL, &stage3konum);
        SDL_RenderCopy(renderer, stage4texture, NULL, &stage4konum);


                SDL_RenderCopy(renderer, engeltexture, NULL, &e1);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e2);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e3);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e4);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e5);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e6);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e7);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e8);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e9);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e10);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e11);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e12);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e13);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e14);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e15);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e16);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e17);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e18);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e19);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e20);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e21);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e22);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e23);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e24);

                    SDL_RenderCopy(renderer, engeltexture, NULL, &ey1);
                    SDL_RenderCopy(renderer, engeltexture, NULL, &ey2);
                    SDL_RenderCopy(renderer, engeltexture, NULL, &ey3);
                    SDL_RenderCopy(renderer, engeltexture, NULL, &ey4);
                    SDL_RenderCopy(renderer, engeltexture, NULL, &ey5);
                    SDL_RenderCopy(renderer, engeltexture, NULL, &ey6);
                    SDL_RenderCopy(renderer, engeltexture, NULL, &ey7);
                    SDL_RenderCopy(renderer, engeltexture, NULL, &ey8);
                    SDL_RenderCopy(renderer, engeltexture, NULL, &ey9);
                    SDL_RenderCopy(renderer, engeltexture, NULL, &ey10);
                    SDL_RenderCopy(renderer, engeltexture, NULL, &ey11);
                    SDL_RenderCopy(renderer, engeltexture, NULL, &ey12);
                    SDL_RenderCopy(renderer, engeltexture, NULL, &ey13);
                    SDL_RenderCopy(renderer, engeltexture, NULL, &ey14);
                    SDL_RenderCopy(renderer, engeltexture, NULL, &ey15);
                    SDL_RenderCopy(renderer, engeltexture, NULL, &ey16);

                        SDL_RenderCopy(renderer, engeltexture, NULL, &et1);
                        SDL_RenderCopy(renderer, engeltexture, NULL, &et2);
                        SDL_RenderCopy(renderer, engeltexture, NULL, &et3);
                        SDL_RenderCopy(renderer, engeltexture, NULL, &et4);
                        SDL_RenderCopy(renderer, engeltexture, NULL, &et5);
                        SDL_RenderCopy(renderer, engeltexture, NULL, &et6);
                        SDL_RenderCopy(renderer, engeltexture, NULL, &et7);
                        SDL_RenderCopy(renderer, engeltexture, NULL, &et8);
                        SDL_RenderCopy(renderer, engeltexture, NULL, &et9);
                        SDL_RenderCopy(renderer, engeltexture, NULL, &et10);
                        SDL_RenderCopy(renderer, engeltexture, NULL, &et11);
                        SDL_RenderCopy(renderer, engeltexture, NULL, &et12);
                        SDL_RenderCopy(renderer, engeltexture, NULL, &et13);
                        SDL_RenderCopy(renderer, engeltexture, NULL, &et14);
                        SDL_RenderCopy(renderer, engeltexture, NULL, &et15);
                        SDL_RenderCopy(renderer, engeltexture, NULL, &et16);
                        SDL_RenderCopy(renderer, engeltexture, NULL, &et17);
                        SDL_RenderCopy(renderer, engeltexture, NULL, &et18);
                        SDL_RenderCopy(renderer, engeltexture, NULL, &et20);
                        SDL_RenderCopy(renderer, engeltexture, NULL, &et21);
                        SDL_RenderCopy(renderer, engeltexture, NULL, &et22);
                        SDL_RenderCopy(renderer, engeltexture, NULL, &et23);

                            SDL_RenderCopy(renderer, engeltexture, NULL, &ek1);
                            SDL_RenderCopy(renderer, engeltexture, NULL, &ek2);
                            SDL_RenderCopy(renderer, engeltexture, NULL, &ek3);
                            SDL_RenderCopy(renderer, engeltexture, NULL, &ek4);
                            SDL_RenderCopy(renderer, engeltexture, NULL, &ek5);
                            SDL_RenderCopy(renderer, engeltexture, NULL, &ek6);
                            SDL_RenderCopy(renderer, engeltexture, NULL, &ek7);
                            SDL_RenderCopy(renderer, engeltexture, NULL, &ek8);
                            SDL_RenderCopy(renderer, engeltexture, NULL, &ek9);
                            SDL_RenderCopy(renderer, engeltexture, NULL, &ek10);
                            SDL_RenderCopy(renderer, engeltexture, NULL, &ek11);
                            SDL_RenderCopy(renderer, engeltexture, NULL, &ek12);

                  SDL_RenderCopy(renderer, dogtexture, NULL, &dogkonum);
                  SDL_RenderCopy(renderer, dogtexture, NULL, &dogkonum2);
                  SDL_RenderCopy(renderer, dogtexture, NULL, &dogkonum3);
                  SDL_RenderCopy(renderer, dogtexture, NULL, &dogkonum4);
                  SDL_RenderCopy(renderer, dogtexture, NULL, &dogkonum5);
                  SDL_RenderCopy(renderer, dogtexture, NULL, &dogkonum6);
                  SDL_RenderCopy(renderer, dogtexture, NULL, &dogkonum7);
                        SDL_RenderCopy(renderer, dogtexture, NULL, &ydogkonum);
                        SDL_RenderCopy(renderer, dogtexture, NULL, &ydogkonum2);
                        SDL_RenderCopy(renderer, dogtexture, NULL, &ydogkonum3);
                        SDL_RenderCopy(renderer, dogtexture, NULL, &ydogkonum4);
                                SDL_RenderCopy(renderer, dogtexture, NULL, &tdogkonum);
                                SDL_RenderCopy(renderer, dogtexture, NULL, &tdogkonum3);
                                SDL_RenderCopy(renderer, dogtexture, NULL, &tdogkonum4);
                                        SDL_RenderCopy(renderer, dogtexture, NULL, &kdogkonum);
                                        SDL_RenderCopy(renderer, dogtexture, NULL, &kdogkonum2);
                                        SDL_RenderCopy(renderer, dogtexture, NULL, &kdogkonum3);

          SDL_RenderCopy(renderer, atestexture, NULL, &ateskonum);
          SDL_RenderCopy(renderer, imagetexture, NULL, &texture_destination);

        // Show what was drawn
        SDL_RenderPresent(renderer);

    }
    // Release resources
  /**  SDL_DestroyTexture(image);
    SDL_DestroyTexture(intro);
    SDL_DestroyTexture(arkaplan);
    IMG_Quit(); **/
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    Mix_FreeMusic(bgmusic);
    Mix_CloseAudio();
    SDL_Quit();

    time(&bit);
    fark = difftime(bit,basla);
    printf("TIME:%g\n",fark*100);
    printf("DISTANCE:%d\n",texture_destination3.x*-1);
    getchar();
    return 0;
}

