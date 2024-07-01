<form action="" method="post">
    <label for="quantite"><?=$_GET["titre"]?></label>
    <input type="number" name="quantite" id="quantite">
    <input type="submit" value="ajouter">
</form>
<?php
if ($_SERVER["REQUEST_METHOD"] == "POST")
{
    require_once("bd.php");
    $idCl = getCnx()->query("select idC from client where name_prenom = ".$_SESSION["nomPrenom"]);
    $param = [$_GET["idL"], $idCl, $_POST["quantite"]];
    $cnx = getCnx()->prepare("isert into panier(idL, idC, qty) values (?, ?, ?)");
    $cnx->execute($params);
    header("location: mon_panier.php");
}