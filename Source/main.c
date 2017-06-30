#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_mixer.h>
#include <SDL2/SDL_image.h>
#include <time.h>
#include <windows.h>

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
int main(int argc, char **argv)
{
    int pause,onay;
    time_t basla,bit;
    double fark;
    char kod[20];

    gets(kod);
    onay = strcmp(kod,"noborder");


    // Initialize SDL
    SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO);

    // Initialize IMG.h
    IMG_Init(IMG_INIT_JPG | IMG_INIT_PNG);


    //Set Mixer
    Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2,2048);
    Mix_Music *bgmusic = Mix_LoadMUS("ses.mp3");
    Mix_Music *end = Mix_LoadMUS("gameover.mp3");
    Mix_Chunk *laser = Mix_LoadWAV("laser.wav");
    Mix_Chunk *blow = Mix_LoadWAV("blow.wav");
    // Create a SDL window
    SDL_Window *window = SDL_CreateWindow("Nyan RUN v1.4 Console Edition", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 567, SDL_WINDOW_OPENGL);

    // Create a renderer (accelerated and in sync with the display refresh rate)
    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

    //TEXT


    //IMAGE Add
    SDL_Surface *intro = IMG_Load("intro.png");
    SDL_Texture *introtexture = SDL_CreateTextureFromSurface(renderer, intro);
    SDL_FreeSurface(intro);

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


    system("cls");

    if(onay == 0)
    {
        system("color 0c");
        printf("\nCHEAT ACTIVATED!\n");
    }


    //IMAGE Location
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

    SDL_Rect etexture_destination;
    etexture_destination.x = 2800;
    etexture_destination.y = 0;
    etexture_destination.w = 100;
    etexture_destination.h = 70;

    SDL_Rect e2texture_destination;
    e2texture_destination.x = 3300;
    e2texture_destination.y = 300;
    e2texture_destination.w = 100;
    e2texture_destination.h = 70;

    SDL_Rect e3texture_destination;
    e3texture_destination.x = 3600;
    e3texture_destination.y = 400;
    e3texture_destination.w = 100;
    e3texture_destination.h = 70;

    SDL_Rect e4texture_destination;
    e4texture_destination.x = 3900;
    e4texture_destination.y = 200;
    e4texture_destination.w = 100;
    e4texture_destination.h = 70;

    SDL_Rect e5texture_destination;
    e5texture_destination.x = 4000;
    e5texture_destination.y = 100;
    e5texture_destination.w = 100;
    e5texture_destination.h = 70;

    SDL_Rect e6texture_destination;
    e6texture_destination.x = 4300;
    e6texture_destination.y = 100;
    e6texture_destination.w = 100;
    e6texture_destination.h = 70;

    SDL_Rect e7texture_destination;
    e7texture_destination.x = 4600;
    e7texture_destination.y = 200;
    e7texture_destination.w = 100;
    e7texture_destination.h = 70;

    SDL_Rect e8texture_destination;
    e8texture_destination.x = 4900;
    e8texture_destination.y = 300;
    e8texture_destination.w = 100;
    e8texture_destination.h = 70;

    SDL_Rect e9texture_destination;
    e9texture_destination.x = 5200;
    e9texture_destination.y = 400;
    e9texture_destination.w = 100;
    e9texture_destination.h = 70;

    SDL_Rect e10texture_destination;
    e10texture_destination.x = 5500;
    e10texture_destination.y = 100;
    e10texture_destination.w = 100;
    e10texture_destination.h = 70;

    SDL_Rect e11texture_destination;
    e11texture_destination.x = 5800;
    e11texture_destination.y = 100;
    e11texture_destination.w = 100;
    e11texture_destination.h = 70;

    SDL_Rect e12texture_destination = {6100, 400, 100, 70};
    SDL_Rect e13texture_destination = {6400, 100, 100, 70};
    SDL_Rect e14texture_destination = {6700, 200, 100, 70};
    SDL_Rect e15texture_destination = {7000, 200, 100, 70};
    SDL_Rect e16texture_destination = {7700, 300, 100, 70};
    SDL_Rect e17texture_destination = {8400, 400, 100, 70};
    SDL_Rect e18texture_destination = {8600, 0, 100, 70};
    SDL_Rect e19texture_destination = {8800, 100, 100, 70};
    SDL_Rect e20texture_destination = {9000, 200, 100, 70};
    SDL_Rect e21texture_destination = {9300, 500, 100, 70};
    SDL_Rect e22texture_destination = {9400, 300, 100, 70};
    SDL_Rect e23texture_destination = {9700, 400, 100, 70};
    SDL_Rect e24texture_destination = {10000, 0, 100, 70};

    SDL_Rect ey1texture_destination = {11600, 0, 100, 70};
    SDL_Rect ey2texture_destination = {11900, 100, 100, 70};
    SDL_Rect ey3texture_destination = {12400, 300, 100, 70};
    SDL_Rect ey4texture_destination = {12700, 200, 100, 70};
    SDL_Rect ey5texture_destination = {13000, 300, 100, 70};
    SDL_Rect ey6texture_destination = {13000, 400, 100, 70};
    SDL_Rect ey7texture_destination = {13600, 0, 100, 70};
    SDL_Rect ey8texture_destination = {14000, 100, 100, 70};
    SDL_Rect ey9texture_destination = {14400, 200, 100, 70};
    SDL_Rect ey10texture_destination = {14500, 300, 100, 70};
    SDL_Rect ey11texture_destination = {15000, 500, 100, 70};
    SDL_Rect ey12texture_destination = {15500, 100, 100, 70};
    SDL_Rect ey13texture_destination = {15700, 200, 100, 70};
    SDL_Rect ey14texture_destination = {16500, 400, 100, 70};
    SDL_Rect ey15texture_destination = {16800, 200, 100, 70};
    SDL_Rect ey16texture_destination = {16900, 100, 100, 70};

    SDL_Rect et1texture_destination = {19300, 0, 100, 70};
    SDL_Rect et2texture_destination = {19640, 100, 100, 70};
    SDL_Rect et3texture_destination = {19800, 100, 100, 70};
    SDL_Rect et4texture_destination = {19960, 200, 100, 70};
    SDL_Rect et5texture_destination = {20020, 300, 100, 70};
    SDL_Rect et6texture_destination = {20100, 200, 100, 70};
    SDL_Rect et7texture_destination = {20260, 400, 100, 70};
    SDL_Rect et8texture_destination = {21260, 400, 100, 70};
    SDL_Rect et9texture_destination = {21320, 300, 100, 70};
    SDL_Rect et10texture_destination = {21400, 200, 100, 70};
    SDL_Rect et11texture_destination = {23000, 200, 100, 70};
    SDL_Rect et12texture_destination = {23320, 300, 100, 70};
    SDL_Rect et13texture_destination = {23400, 100, 100, 70};
    SDL_Rect et14texture_destination = {24200, 0, 100, 70};
    SDL_Rect et15texture_destination = {24200, 100, 100, 70};
    SDL_Rect et16texture_destination = {24200, 200, 100, 70};
    SDL_Rect et17texture_destination = {24200, 300, 100, 70};
    SDL_Rect et18texture_destination = {25800, 0, 100, 70};
    SDL_Rect et20texture_destination = {25800, 200, 100, 70};
    SDL_Rect et21texture_destination = {25800, 300, 100, 70};
    SDL_Rect et22texture_destination = {25800, 400, 100, 70};
    SDL_Rect et23texture_destination = {25800, 500, 100, 70};

    SDL_Rect ek1texture_destination = {28200, 0, 100, 70};
    SDL_Rect ek2texture_destination = {28360, 100, 100, 70};
    SDL_Rect ek3texture_destination = {28440, 200, 100, 70};
    SDL_Rect ek4texture_destination = {28600, 300, 100, 70};
    SDL_Rect ek5texture_destination = {28760, 400, 100, 70};
    SDL_Rect ek6texture_destination = {28840, 0, 100, 70};
    SDL_Rect ek7texture_destination = {29000, 300, 100, 70};
    SDL_Rect ek8texture_destination = {29160, 200, 100, 70};
    SDL_Rect ek9texture_destination = {29240, 0, 100, 70};
    SDL_Rect ek10texture_destination = {30600, 100, 100, 70};
    SDL_Rect ek11texture_destination = {30600, 200, 100, 70};
    SDL_Rect ek12texture_destination = {30600, 300, 100, 70};


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
    Mix_VolumeMusic(50);
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
                    if(onay == 0)
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
                if(etexture_destination.y == texture_destination.y && etexture_destination.x == texture_destination.x || etexture_destination.y == texture_destination.y && etexture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(e2texture_destination.y == texture_destination.y && e2texture_destination.x == texture_destination.x || e2texture_destination.y == texture_destination.y && e2texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(e3texture_destination.y == texture_destination.y && e3texture_destination.x == texture_destination.x || e3texture_destination.y == texture_destination.y && e3texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(e4texture_destination.y == texture_destination.y && e4texture_destination.x == texture_destination.x || e4texture_destination.y == texture_destination.y && e4texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(e5texture_destination.y == texture_destination.y && e5texture_destination.x == texture_destination.x || e5texture_destination.y == texture_destination.y && e5texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(e6texture_destination.y == texture_destination.y && e6texture_destination.x == texture_destination.x || e6texture_destination.y == texture_destination.y && e6texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(e7texture_destination.y == texture_destination.y && e7texture_destination.x == texture_destination.x || e7texture_destination.y == texture_destination.y && e7texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(e8texture_destination.y == texture_destination.y && e8texture_destination.x == texture_destination.x || e8texture_destination.y == texture_destination.y && e8texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(e9texture_destination.y == texture_destination.y && e9texture_destination.x == texture_destination.x || e9texture_destination.y == texture_destination.y && e9texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(e10texture_destination.y == texture_destination.y && e10texture_destination.x == texture_destination.x || e10texture_destination.y == texture_destination.y && e10texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(e11texture_destination.y == texture_destination.y && e11texture_destination.x == texture_destination.x || e11texture_destination.y == texture_destination.y && e11texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(e12texture_destination.y == texture_destination.y && e12texture_destination.x == texture_destination.x || e12texture_destination.y == texture_destination.y && e12texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(e13texture_destination.y == texture_destination.y && e13texture_destination.x == texture_destination.x || e13texture_destination.y == texture_destination.y && e13texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(e14texture_destination.y == texture_destination.y && e14texture_destination.x == texture_destination.x || e14texture_destination.y == texture_destination.y && e14texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(e15texture_destination.y == texture_destination.y && e15texture_destination.x == texture_destination.x || e15texture_destination.y == texture_destination.y && e15texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(e16texture_destination.y == texture_destination.y && e16texture_destination.x == texture_destination.x || e16texture_destination.y == texture_destination.y && e16texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(e17texture_destination.y == texture_destination.y && e17texture_destination.x == texture_destination.x || e17texture_destination.y == texture_destination.y && e17texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(e18texture_destination.y == texture_destination.y && e18texture_destination.x == texture_destination.x || e18texture_destination.y == texture_destination.y && e18texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(e19texture_destination.y == texture_destination.y && e19texture_destination.x == texture_destination.x || e19texture_destination.y == texture_destination.y && e19texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(e20texture_destination.y == texture_destination.y && e20texture_destination.x == texture_destination.x || e20texture_destination.y == texture_destination.y && e20texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(e21texture_destination.y == texture_destination.y && e21texture_destination.x == texture_destination.x || e21texture_destination.y == texture_destination.y && e21texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(e22texture_destination.y == texture_destination.y && e22texture_destination.x == texture_destination.x || e22texture_destination.y == texture_destination.y && e22texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(e23texture_destination.y == texture_destination.y && e23texture_destination.x == texture_destination.x || e23texture_destination.y == texture_destination.y && e23texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(e24texture_destination.y == texture_destination.y && e24texture_destination.x == texture_destination.x || e24texture_destination.y == texture_destination.y && e24texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }

                if(ey1texture_destination.y == texture_destination.y && ey1texture_destination.x == texture_destination.x || ey1texture_destination.y == texture_destination.y && ey1texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }

                if(ey2texture_destination.y == texture_destination.y && ey2texture_destination.x == texture_destination.x || ey2texture_destination.y == texture_destination.y && ey2texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }

                if(ey3texture_destination.y == texture_destination.y && ey3texture_destination.x == texture_destination.x || ey3texture_destination.y == texture_destination.y && ey3texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }

                if(ey4texture_destination.y == texture_destination.y && ey4texture_destination.x == texture_destination.x || ey4texture_destination.y == texture_destination.y && ey4texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }

                if(ey5texture_destination.y == texture_destination.y && ey5texture_destination.x == texture_destination.x  || ey5texture_destination.y == texture_destination.y && ey5texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }

                if(ey6texture_destination.y == texture_destination.y && ey6texture_destination.x == texture_destination.x || ey6texture_destination.y == texture_destination.y && ey6texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }

                if(ey7texture_destination.y == texture_destination.y && ey7texture_destination.x == texture_destination.x || ey7texture_destination.y == texture_destination.y && ey7texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }

                if(ey8texture_destination.y == texture_destination.y && ey8texture_destination.x == texture_destination.x || ey8texture_destination.y == texture_destination.y && ey8texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }

                if(ey9texture_destination.y == texture_destination.y && ey9texture_destination.x == texture_destination.x || ey9texture_destination.y == texture_destination.y && ey9texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }

                if(ey10texture_destination.y == texture_destination.y && ey10texture_destination.x == texture_destination.x || ey10texture_destination.y == texture_destination.y && ey10texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }

                if(ey11texture_destination.y == texture_destination.y && ey11texture_destination.x == texture_destination.x || ey11texture_destination.y == texture_destination.y && ey11texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }

                if(ey12texture_destination.y == texture_destination.y && ey12texture_destination.x == texture_destination.x || ey12texture_destination.y == texture_destination.y && ey12texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }

                if(ey13texture_destination.y == texture_destination.y && ey13texture_destination.x == texture_destination.x || ey13texture_destination.y == texture_destination.y && ey13texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }

                if(ey14texture_destination.y == texture_destination.y && ey14texture_destination.x == texture_destination.x || ey14texture_destination.y == texture_destination.y && ey14texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }

                if(ey15texture_destination.y == texture_destination.y && ey15texture_destination.x == texture_destination.x || ey15texture_destination.y == texture_destination.y && ey15texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }

                if(ey16texture_destination.y == texture_destination.y && ey16texture_destination.x == texture_destination.x || ey16texture_destination.y == texture_destination.y && ey16texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }

                if(et1texture_destination.y == texture_destination.y && et1texture_destination.x == texture_destination.x || et1texture_destination.y == texture_destination.y && et1texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(et2texture_destination.y == texture_destination.y && et2texture_destination.x == texture_destination.x || et2texture_destination.y == texture_destination.y && et2texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(et3texture_destination.y == texture_destination.y && et3texture_destination.x == texture_destination.x || et3texture_destination.y == texture_destination.y && et3texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(et4texture_destination.y == texture_destination.y && et4texture_destination.x == texture_destination.x || et4texture_destination.y == texture_destination.y && et4texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(et5texture_destination.y == texture_destination.y && et5texture_destination.x == texture_destination.x || et5texture_destination.y == texture_destination.y && et5texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(et6texture_destination.y == texture_destination.y && et6texture_destination.x == texture_destination.x || et6texture_destination.y == texture_destination.y && et6texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(et7texture_destination.y == texture_destination.y && et7texture_destination.x == texture_destination.x || et7texture_destination.y == texture_destination.y && et7texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(et8texture_destination.y == texture_destination.y && et8texture_destination.x == texture_destination.x || et8texture_destination.y == texture_destination.y && et8texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(et9texture_destination.y == texture_destination.y && et9texture_destination.x == texture_destination.x || et9texture_destination.y == texture_destination.y && et9texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(et10texture_destination.y == texture_destination.y && et10texture_destination.x == texture_destination.x || et10texture_destination.y == texture_destination.y && et10texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(et11texture_destination.y == texture_destination.y && et11texture_destination.x == texture_destination.x || et11texture_destination.y == texture_destination.y && et11texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(et12texture_destination.y == texture_destination.y && et12texture_destination.x == texture_destination.x || et12texture_destination.y == texture_destination.y && et12texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(et13texture_destination.y == texture_destination.y && et13texture_destination.x == texture_destination.x || et13texture_destination.y == texture_destination.y && et13texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(et14texture_destination.y == texture_destination.y && et14texture_destination.x == texture_destination.x || et14texture_destination.y == texture_destination.y && et14texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(et15texture_destination.y == texture_destination.y && et15texture_destination.x == texture_destination.x || et15texture_destination.y == texture_destination.y && et15texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(et16texture_destination.y == texture_destination.y && et16texture_destination.x == texture_destination.x || et16texture_destination.y == texture_destination.y && et16texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(et17texture_destination.y == texture_destination.y && et17texture_destination.x == texture_destination.x || et17texture_destination.y == texture_destination.y && et17texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(et18texture_destination.y == texture_destination.y && et18texture_destination.x == texture_destination.x || et18texture_destination.y == texture_destination.y && et18texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(et20texture_destination.y == texture_destination.y && et20texture_destination.x == texture_destination.x || et20texture_destination.y == texture_destination.y && et20texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(et21texture_destination.y == texture_destination.y && et21texture_destination.x == texture_destination.x || et21texture_destination.y == texture_destination.y && et21texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(et22texture_destination.y == texture_destination.y && et22texture_destination.x == texture_destination.x || et22texture_destination.y == texture_destination.y && et22texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(et23texture_destination.y == texture_destination.y && et23texture_destination.x == texture_destination.x || et23texture_destination.y == texture_destination.y && et23texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(ek1texture_destination.y == texture_destination.y && ek1texture_destination.x == texture_destination.x || ek1texture_destination.y == texture_destination.y && ek1texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(ek2texture_destination.y == texture_destination.y && ek2texture_destination.x == texture_destination.x || ek2texture_destination.y == texture_destination.y && ek2texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(ek3texture_destination.y == texture_destination.y && ek3texture_destination.x == texture_destination.x || ek3texture_destination.y == texture_destination.y && ek3texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(ek4texture_destination.y == texture_destination.y && ek4texture_destination.x == texture_destination.x || ek4texture_destination.y == texture_destination.y && ek4texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(ek5texture_destination.y == texture_destination.y && ek5texture_destination.x == texture_destination.x || ek5texture_destination.y == texture_destination.y && ek5texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(ek6texture_destination.y == texture_destination.y && ek6texture_destination.x == texture_destination.x || ek6texture_destination.y == texture_destination.y && ek6texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(ek7texture_destination.y == texture_destination.y && ek7texture_destination.x == texture_destination.x || ek7texture_destination.y == texture_destination.y && ek7texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(ek8texture_destination.y == texture_destination.y && ek8texture_destination.x == texture_destination.x || ek8texture_destination.y == texture_destination.y && ek8texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(ek9texture_destination.y == texture_destination.y && ek9texture_destination.x == texture_destination.x || ek9texture_destination.y == texture_destination.y && ek9texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(ek10texture_destination.y == texture_destination.y && ek10texture_destination.x == texture_destination.x || ek10texture_destination.y == texture_destination.y && ek10texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(ek11texture_destination.y == texture_destination.y && ek11texture_destination.x == texture_destination.x || ek11texture_destination.y == texture_destination.y && ek11texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(ek12texture_destination.y == texture_destination.y && ek12texture_destination.x == texture_destination.x || ek12texture_destination.y == texture_destination.y && ek12texture_destination.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
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

                if(dogkonum.y == texture_destination.y && dogkonum.x == texture_destination.x || dogkonum.y == texture_destination.y && dogkonum.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }

                if(dogkonum2.y == texture_destination.y && dogkonum2.x == texture_destination.x || dogkonum2.y == texture_destination.y && dogkonum2.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }

                if(dogkonum3.y == texture_destination.y && dogkonum3.x == texture_destination.x || dogkonum3.y == texture_destination.y && dogkonum3.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }

                if(dogkonum4.y == texture_destination.y && dogkonum4.x == texture_destination.x || dogkonum4.y == texture_destination.y && dogkonum4.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }

                if(dogkonum5.y == texture_destination.y && dogkonum5.x == texture_destination.x || dogkonum5.y == texture_destination.y && dogkonum5.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }

                if(dogkonum6.y == texture_destination.y && dogkonum6.x == texture_destination.x || dogkonum6.y == texture_destination.y && dogkonum6.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }

                if(dogkonum7.y == texture_destination.y && dogkonum7.x == texture_destination.x || dogkonum7.y == texture_destination.y && dogkonum7.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }

                if(ydogkonum.y == texture_destination.y && ydogkonum.x == texture_destination.x || ydogkonum.y == texture_destination.y && ydogkonum.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(ydogkonum2.y == texture_destination.y && ydogkonum2.x == texture_destination.x || ydogkonum2.y == texture_destination.y && ydogkonum2.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(ydogkonum3.y == texture_destination.y && ydogkonum3.x == texture_destination.x || ydogkonum3.y == texture_destination.y && ydogkonum3.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(ydogkonum4.y == texture_destination.y && ydogkonum4.x == texture_destination.x || ydogkonum4.y == texture_destination.y && ydogkonum4.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }


                if(tdogkonum.y == texture_destination.y && tdogkonum.x == texture_destination.x || tdogkonum.y == texture_destination.y && tdogkonum.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(tdogkonum3.y == texture_destination.y && tdogkonum3.x == texture_destination.x || tdogkonum3.y == texture_destination.y && tdogkonum3.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(tdogkonum4.y == texture_destination.y && tdogkonum4.x == texture_destination.x || tdogkonum4.y == texture_destination.y && tdogkonum4.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }

                if(kdogkonum.y == texture_destination.y && kdogkonum.x == texture_destination.x || kdogkonum.y == texture_destination.y && kdogkonum.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(kdogkonum2.y == texture_destination.y && kdogkonum2.x == texture_destination.x || kdogkonum2.y == texture_destination.y && kdogkonum2.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
                }
                if(kdogkonum3.y == texture_destination.y && kdogkonum3.x == texture_destination.x || kdogkonum3.y == texture_destination.y && kdogkonum3.x-80 == texture_destination.x)
                {
                Mix_PlayMusic(end,-1);
                delay(2000);
                SDL_Quit();
                time(&bit);
                fark = difftime(bit,basla);
                printf("TIME:%g\n",fark*100);
                printf("DISTANCE:%d\n",texture_destination3.x*-1);
                getch();
                exit(1);
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
                        etexture_destination.x -=5;
                        e2texture_destination.x -=5;
                        e3texture_destination.x -=5;
                        e4texture_destination.x -=5;
                        e5texture_destination.x -=5;
                        e6texture_destination.x -=5;
                        e7texture_destination.x -=5;
                        e8texture_destination.x -=5;
                        e9texture_destination.x -=5;
                        e10texture_destination.x -=5;
                        e11texture_destination.x -=5;
                        e12texture_destination.x -=5;
                        e13texture_destination.x -=5;
                        e14texture_destination.x -=5;
                        e15texture_destination.x -=5;
                        e16texture_destination.x -=5;
                        e17texture_destination.x -=5;
                        e18texture_destination.x -=5;
                        e19texture_destination.x -=5;
                        e20texture_destination.x -=5;
                        e21texture_destination.x -=5;
                        e22texture_destination.x -=5;
                        e23texture_destination.x -=5;
                        e24texture_destination.x -=5;

                            ey1texture_destination.x -=5;
                            ey2texture_destination.x -=5;
                            ey3texture_destination.x -=5;
                            ey4texture_destination.x -=5;
                            ey5texture_destination.x -=5;
                            ey6texture_destination.x -=5;
                            ey7texture_destination.x -=5;
                            ey8texture_destination.x -=5;
                            ey9texture_destination.x -=5;
                            ey10texture_destination.x -=5;
                            ey11texture_destination.x -=5;
                            ey12texture_destination.x -=5;
                            ey13texture_destination.x -=5;
                            ey14texture_destination.x -=5;
                            ey15texture_destination.x -=5;
                            ey16texture_destination.x -=5;

                                et1texture_destination.x -=5;
                                et2texture_destination.x -=5;
                                et3texture_destination.x -=5;
                                et4texture_destination.x -=5;
                                et5texture_destination.x -=5;
                                et6texture_destination.x -=5;
                                et7texture_destination.x -=5;
                                et8texture_destination.x -=5;
                                et9texture_destination.x -=5;
                                et10texture_destination.x -=5;
                                et11texture_destination.x -=5;
                                et12texture_destination.x -=5;
                                et13texture_destination.x -=5;
                                et14texture_destination.x -=5;
                                et15texture_destination.x -=5;
                                et16texture_destination.x -=5;
                                et17texture_destination.x -=5;
                                et18texture_destination.x -=5;
                                et20texture_destination.x -=5;
                                et21texture_destination.x -=5;
                                et22texture_destination.x -=5;
                                et23texture_destination.x -=5;

                                        ek1texture_destination.x -=5;
                                        ek2texture_destination.x -=5;
                                        ek3texture_destination.x -=5;
                                        ek4texture_destination.x -=5;
                                        ek5texture_destination.x -=5;
                                        ek6texture_destination.x -=5;
                                        ek7texture_destination.x -=5;
                                        ek8texture_destination.x -=5;
                                        ek9texture_destination.x -=5;
                                        ek10texture_destination.x -=5;
                                        ek11texture_destination.x -=5;
                                        ek12texture_destination.x -=5;

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
                        etexture_destination.x -=5;
                        e2texture_destination.x -=5;
                        e3texture_destination.x -=5;
                        e4texture_destination.x -=5;
                        e5texture_destination.x -=5;
                        e6texture_destination.x -=5;
                        e7texture_destination.x -=5;
                        e8texture_destination.x -=5;
                        e9texture_destination.x -=5;
                        e10texture_destination.x -=5;
                        e11texture_destination.x -=5;
                        e12texture_destination.x -=5;
                        e13texture_destination.x -=5;
                        e14texture_destination.x -=5;
                        e15texture_destination.x -=5;
                        e16texture_destination.x -=5;
                        e17texture_destination.x -=5;
                        e18texture_destination.x -=5;
                        e19texture_destination.x -=5;
                        e20texture_destination.x -=5;
                        e21texture_destination.x -=5;
                        e22texture_destination.x -=5;
                        e23texture_destination.x -=5;
                        e24texture_destination.x -=5;

                            ey1texture_destination.x -=5;
                            ey2texture_destination.x -=5;
                            ey3texture_destination.x -=5;
                            ey4texture_destination.x -=5;
                            ey5texture_destination.x -=5;
                            ey6texture_destination.x -=5;
                            ey7texture_destination.x -=5;
                            ey8texture_destination.x -=5;
                            ey9texture_destination.x -=5;
                            ey10texture_destination.x -=5;
                            ey11texture_destination.x -=5;
                            ey12texture_destination.x -=5;
                            ey13texture_destination.x -=5;
                            ey14texture_destination.x -=5;
                            ey15texture_destination.x -=5;
                            ey16texture_destination.x -=5;

                                et1texture_destination.x -=5;
                                et2texture_destination.x -=5;
                                et3texture_destination.x -=5;
                                et4texture_destination.x -=5;
                                et5texture_destination.x -=5;
                                et6texture_destination.x -=5;
                                et7texture_destination.x -=5;
                                et8texture_destination.x -=5;
                                et9texture_destination.x -=5;
                                et10texture_destination.x -=5;
                                et11texture_destination.x -=5;
                                et12texture_destination.x -=5;
                                et13texture_destination.x -=5;
                                et14texture_destination.x -=5;
                                et15texture_destination.x -=5;
                                et16texture_destination.x -=5;
                                et17texture_destination.x -=5;
                                et18texture_destination.x -=5;
                                et20texture_destination.x -=5;
                                et21texture_destination.x -=5;
                                et22texture_destination.x -=5;
                                et23texture_destination.x -=5;

                                        ek1texture_destination.x -=5;
                                        ek2texture_destination.x -=5;
                                        ek3texture_destination.x -=5;
                                        ek4texture_destination.x -=5;
                                        ek5texture_destination.x -=5;
                                        ek6texture_destination.x -=5;
                                        ek7texture_destination.x -=5;
                                        ek8texture_destination.x -=5;
                                        ek9texture_destination.x -=5;
                                        ek10texture_destination.x -=5;
                                        ek11texture_destination.x -=5;
                                        ek12texture_destination.x -=5;


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
                            ey1texture_destination.x -=8;
                            ey2texture_destination.x -=8;
                            ey3texture_destination.x -=8;
                            ey4texture_destination.x -=8;
                            ey5texture_destination.x -=8;
                            ey6texture_destination.x -=8;
                            ey7texture_destination.x -=8;
                            ey8texture_destination.x -=8;
                            ey9texture_destination.x -=8;
                            ey10texture_destination.x -=8;
                            ey11texture_destination.x -=8;
                            ey12texture_destination.x -=8;
                            ey13texture_destination.x -=8;
                            ey14texture_destination.x -=8;
                            ey15texture_destination.x -=8;
                            ey16texture_destination.x -=8;

                                et1texture_destination.x -=8;
                                et2texture_destination.x -=8;
                                et3texture_destination.x -=8;
                                et4texture_destination.x -=8;
                                et5texture_destination.x -=8;
                                et6texture_destination.x -=8;
                                et7texture_destination.x -=8;
                                et8texture_destination.x -=8;
                                et9texture_destination.x -=8;
                                et10texture_destination.x -=8;
                                et11texture_destination.x -=8;
                                et12texture_destination.x -=8;
                                et13texture_destination.x -=8;
                                et14texture_destination.x -=8;
                                et15texture_destination.x -=8;
                                et16texture_destination.x -=8;
                                et17texture_destination.x -=8;
                                et18texture_destination.x -=8;
                                et20texture_destination.x -=8;
                                et21texture_destination.x -=8;
                                et22texture_destination.x -=8;
                                et23texture_destination.x -=8;

                                        ek1texture_destination.x -=8;
                                        ek2texture_destination.x -=8;
                                        ek3texture_destination.x -=8;
                                        ek4texture_destination.x -=8;
                                        ek5texture_destination.x -=8;
                                        ek6texture_destination.x -=8;
                                        ek7texture_destination.x -=8;
                                        ek8texture_destination.x -=8;
                                        ek9texture_destination.x -=8;
                                        ek10texture_destination.x -=8;
                                        ek11texture_destination.x -=8;
                                        ek12texture_destination.x -=8;
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

                                et1texture_destination.x -=16;
                                et2texture_destination.x -=16;
                                et3texture_destination.x -=16;
                                et4texture_destination.x -=16;
                                et5texture_destination.x -=16;
                                et6texture_destination.x -=16;
                                et7texture_destination.x -=16;
                                et8texture_destination.x -=16;
                                et9texture_destination.x -=16;
                                et10texture_destination.x -=16;
                                et11texture_destination.x -=16;
                                et12texture_destination.x -=16;
                                et13texture_destination.x -=16;
                                et14texture_destination.x -=16;
                                et15texture_destination.x -=16;
                                et16texture_destination.x -=16;
                                et17texture_destination.x -=16;
                                et18texture_destination.x -=16;
                                et20texture_destination.x -=16;
                                et21texture_destination.x -=16;
                                et22texture_destination.x -=16;
                                et23texture_destination.x -=16;

                                        ek1texture_destination.x -=16;
                                        ek2texture_destination.x -=16;
                                        ek3texture_destination.x -=16;
                                        ek4texture_destination.x -=16;
                                        ek5texture_destination.x -=16;
                                        ek6texture_destination.x -=16;
                                        ek7texture_destination.x -=16;
                                        ek8texture_destination.x -=16;
                                        ek9texture_destination.x -=16;
                                        ek10texture_destination.x -=16;
                                        ek11texture_destination.x -=16;
                                        ek12texture_destination.x -=16;
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

                        ek1texture_destination.x -=16;
                        ek2texture_destination.x -=16;
                        ek3texture_destination.x -=16;
                        ek4texture_destination.x -=16;
                        ek5texture_destination.x -=16;
                        ek6texture_destination.x -=16;
                        ek7texture_destination.x -=16;
                        ek8texture_destination.x -=16;
                        ek9texture_destination.x -=16;
                        ek10texture_destination.x -=16;
                        ek11texture_destination.x -=16;
                        ek12texture_destination.x -=16;
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
                    getch();
                    exit(0);
                }
            }

        // Clear screen with black
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);

        //for draw line
        SDL_RenderCopy(renderer, arkaplantexture, NULL, &texture_destination2);
        SDL_RenderCopy(renderer, arkaplan2texture, NULL, &texture_destination4);
        SDL_RenderCopy(renderer, arkaplan3texture, NULL, &texture_destination5);
        SDL_RenderCopy(renderer, arkaplan4texture, NULL, &texture_destination6);
        SDL_RenderCopy(renderer, introtexture, NULL, &texture_destination3);
        SDL_RenderCopy(renderer, stage2texture, NULL, &stage2konum);
        SDL_RenderCopy(renderer, stage3texture, NULL, &stage3konum);
        SDL_RenderCopy(renderer, stage4texture, NULL, &stage4konum);


                SDL_RenderCopy(renderer, engeltexture, NULL, &etexture_destination);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e2texture_destination);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e3texture_destination);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e4texture_destination);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e5texture_destination);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e6texture_destination);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e7texture_destination);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e8texture_destination);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e9texture_destination);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e10texture_destination);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e11texture_destination);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e12texture_destination);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e13texture_destination);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e14texture_destination);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e15texture_destination);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e16texture_destination);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e17texture_destination);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e18texture_destination);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e19texture_destination);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e20texture_destination);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e21texture_destination);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e22texture_destination);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e23texture_destination);
                SDL_RenderCopy(renderer, engeltexture, NULL, &e24texture_destination);

                    SDL_RenderCopy(renderer, engeltexture, NULL, &ey1texture_destination);
                    SDL_RenderCopy(renderer, engeltexture, NULL, &ey2texture_destination);
                    SDL_RenderCopy(renderer, engeltexture, NULL, &ey3texture_destination);
                    SDL_RenderCopy(renderer, engeltexture, NULL, &ey4texture_destination);
                    SDL_RenderCopy(renderer, engeltexture, NULL, &ey5texture_destination);
                    SDL_RenderCopy(renderer, engeltexture, NULL, &ey6texture_destination);
                    SDL_RenderCopy(renderer, engeltexture, NULL, &ey7texture_destination);
                    SDL_RenderCopy(renderer, engeltexture, NULL, &ey8texture_destination);
                    SDL_RenderCopy(renderer, engeltexture, NULL, &ey9texture_destination);
                    SDL_RenderCopy(renderer, engeltexture, NULL, &ey10texture_destination);
                    SDL_RenderCopy(renderer, engeltexture, NULL, &ey11texture_destination);
                    SDL_RenderCopy(renderer, engeltexture, NULL, &ey12texture_destination);
                    SDL_RenderCopy(renderer, engeltexture, NULL, &ey13texture_destination);
                    SDL_RenderCopy(renderer, engeltexture, NULL, &ey14texture_destination);
                    SDL_RenderCopy(renderer, engeltexture, NULL, &ey15texture_destination);
                    SDL_RenderCopy(renderer, engeltexture, NULL, &ey16texture_destination);

                        SDL_RenderCopy(renderer, engeltexture, NULL, &et1texture_destination);
                        SDL_RenderCopy(renderer, engeltexture, NULL, &et2texture_destination);
                        SDL_RenderCopy(renderer, engeltexture, NULL, &et3texture_destination);
                        SDL_RenderCopy(renderer, engeltexture, NULL, &et4texture_destination);
                        SDL_RenderCopy(renderer, engeltexture, NULL, &et5texture_destination);
                        SDL_RenderCopy(renderer, engeltexture, NULL, &et6texture_destination);
                        SDL_RenderCopy(renderer, engeltexture, NULL, &et7texture_destination);
                        SDL_RenderCopy(renderer, engeltexture, NULL, &et8texture_destination);
                        SDL_RenderCopy(renderer, engeltexture, NULL, &et9texture_destination);
                        SDL_RenderCopy(renderer, engeltexture, NULL, &et10texture_destination);
                        SDL_RenderCopy(renderer, engeltexture, NULL, &et11texture_destination);
                        SDL_RenderCopy(renderer, engeltexture, NULL, &et12texture_destination);
                        SDL_RenderCopy(renderer, engeltexture, NULL, &et13texture_destination);
                        SDL_RenderCopy(renderer, engeltexture, NULL, &et14texture_destination);
                        SDL_RenderCopy(renderer, engeltexture, NULL, &et15texture_destination);
                        SDL_RenderCopy(renderer, engeltexture, NULL, &et16texture_destination);
                        SDL_RenderCopy(renderer, engeltexture, NULL, &et17texture_destination);
                        SDL_RenderCopy(renderer, engeltexture, NULL, &et18texture_destination);
                        SDL_RenderCopy(renderer, engeltexture, NULL, &et20texture_destination);
                        SDL_RenderCopy(renderer, engeltexture, NULL, &et21texture_destination);
                        SDL_RenderCopy(renderer, engeltexture, NULL, &et22texture_destination);
                        SDL_RenderCopy(renderer, engeltexture, NULL, &et23texture_destination);

                            SDL_RenderCopy(renderer, engeltexture, NULL, &ek1texture_destination);
                            SDL_RenderCopy(renderer, engeltexture, NULL, &ek2texture_destination);
                            SDL_RenderCopy(renderer, engeltexture, NULL, &ek3texture_destination);
                            SDL_RenderCopy(renderer, engeltexture, NULL, &ek4texture_destination);
                            SDL_RenderCopy(renderer, engeltexture, NULL, &ek5texture_destination);
                            SDL_RenderCopy(renderer, engeltexture, NULL, &ek6texture_destination);
                            SDL_RenderCopy(renderer, engeltexture, NULL, &ek7texture_destination);
                            SDL_RenderCopy(renderer, engeltexture, NULL, &ek8texture_destination);
                            SDL_RenderCopy(renderer, engeltexture, NULL, &ek9texture_destination);
                            SDL_RenderCopy(renderer, engeltexture, NULL, &ek10texture_destination);
                            SDL_RenderCopy(renderer, engeltexture, NULL, &ek11texture_destination);
                            SDL_RenderCopy(renderer, engeltexture, NULL, &ek12texture_destination);

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
    SDL_DestroyTexture(image);
    SDL_DestroyTexture(intro);
    SDL_DestroyTexture(arkaplan);
    IMG_Quit();
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    Mix_FreeMusic(bgmusic);
    Mix_CloseAudio();
    SDL_Quit();

    time(&bit);
    fark = difftime(bit,basla);
    printf("TIME:%g\n",fark*100);
    printf("DISTANCE:%d\n",texture_destination3.x*-1);
    getch();
    return 0;
}

