<?php

function getCnx()
{
    static $cnx;

    if (!$cnx)
        $cnx = new PDO("mysql:host=localhost");
    return ($cnx);
}