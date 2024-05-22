#ifndef __JEUX_HPP__
#define __JEUX_HPP__

class Jeux {
    public:
        virtual void start() = 0;
        virtual void restart() = 0;
        virtual void quit() = 0;
        virtual void pause() = 0;
        virtual void play() = 0; 
};

#endif