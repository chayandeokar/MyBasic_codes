if [ $MYUID -eq 1010170000 ]
then
        echo "we can do"
        read -p "Enter package name : " pack
        if rpm -q $pack $> /dev/null
        then
                echo "$pack already installed "
        elif yum install $pack -y &> /dev/null
        then
                echo "$pack installed success"
        else
                echo "$pack not innstalled"
        fi
else
        echo "worng id"
fi
