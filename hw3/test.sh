score=0

clear_lib(){
    rm lib/*.a 2>/dev/null
}

remove_dir(){
    if [ -d build ] 
    then
        rm build -rf
    fi

    if [ -d bin ] 
    then
        rm bin -rf
    fi

    clear_lib
}

func_test(){
    echo
    echo "===================== function test start ====================="

    for ((i=0;i<20;i+=5))
    do
        num=$(./bin/hw3 $i)
        if ((num==i*i))
        then
            ((score++))
        else
            echo "[ERROR] function error on number $i"

        fi
    done
    echo
    echo [FINAL] score: $score
}

build_test(){
    echo "===================== build test start ====================="
    echo
    
    remove_dir
    mkdir bin build

    cd build
    cmake ../
    if (($?==0))
    then
        ((score+=2))
    else
        echo
        echo [ERROR] cmake error
        echo [FINAL] score: $score
        exit
    fi
    

    make
    make install
    if (($?==0))
    then
        ((score+=2))
    else
        echo
        echo [ERROR] make install error
        echo [FINAL] score: $score
        exit
    fi
    
    echo
    if [ -f ../lib/libprintlog.a ]
    then
        ((score++))
    else

        echo [ERROR] libprintlog.a does not exist.
    fi
    if [ -f ../lib/libsquare.a ]
    then
        ((score++))
    else
        echo [ERROR] libsquare.a does not exist.
    fi

    
    cd ..
    rm build -rf
}

test(){
    build_test
    if ((score>=4))
    then
        func_test
    else
        echo
        echo [FINAL] score: $score
    fi
}


test