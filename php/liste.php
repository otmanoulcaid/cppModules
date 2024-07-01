<?php
require_once("bd.php");
function getRows($table)
{
    $cnx = getCnx()->query("select * from $table");
    return ($cnx->fetchAll());
}
?>

<div>
    <?php 
        $rows = getRows("livre");
        foreach ($rows as $row) { ?>
            <img src="<?=$row["couverture"]?>" alt=""> 
            <span><?=$row["titre"]?><?=$row["titre"]?></span>  
            <a href="ajouter_produit.php?titre=<?=$row["titre"]?>&idL=<?=$row["idL"]?>">ajouter au panier</a>  
        <?php } ?>
</div>